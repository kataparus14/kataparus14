//created by fhandy nofalino akhsan 23343065

#include <stdio.h>
#include <string.h>

int main() {
    // Definisi username dan password yang benar
    char usernameBenar[] = "user123";
    char passwordBenar[] = "pass123";

    // Variabel untuk menyimpan input pengguna
    char inputUsername[20];
    char inputPassword[20];

    // Meminta pengguna memasukkan username dan password
    printf("Masukkan username: ");
    scanf("%s", inputUsername);
    printf("Masukkan password: ");
    scanf("%s", inputPassword);

    // Memeriksa apakah username dan password benar
    if (strcmp(inputUsername, usernameBenar) == 0 && strcmp(inputPassword, passwordBenar) == 0) {
        // Jika benar, tampilkan notifikasi berhasil login
        printf("Berhasil login\n");
    } else {
        // Jika salah, tampilkan notifikasi password salah
        printf("Password salah\n");
    }

    return 0;
}
