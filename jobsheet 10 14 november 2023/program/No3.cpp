//created by fhandy nofalino akhsan 23343065

#include <stdio.h>
#include <string.h>

typedef struct {
    int npm;
    char nama[50];
    char tgl_lahir[11];
    char alamat[100];
    char hp[15];
} Mahasiswa;

void printMahasiswa(Mahasiswa mahasiswa) {
    printf("%d %s %s %s %s\n", mahasiswa.npm, mahasiswa.nama, mahasiswa.tgl_lahir, mahasiswa.alamat, mahasiswa.hp);
}

int main() {
    Mahasiswa mahasiswa[100];
    int count = 0;
    char again;

    do {
        printf("Enter the NPM: ");
        scanf("%d", &mahasiswa[count].npm);

        printf("Enter the name: ");
        scanf(" %[^\n]", mahasiswa[count].nama);

        printf("Enter the date of birth: ");
        scanf(" %[^\n]", mahasiswa[count].tgl_lahir);

        printf("Enter the address: ");
        scanf(" %[^\n]", mahasiswa[count].alamat);

        printf("Enter the phone number: ");
        scanf(" %[^\n]", mahasiswa[count].hp);

        printMahasiswa(mahasiswa[count]);
        count++;

        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');

    return 0;
}