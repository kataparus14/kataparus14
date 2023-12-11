//created by Fhandy Nofalino Akhsan 23343065

#include <stdio.h>

int main() {
    int detik, jam, menit, sisa_detik;

    printf("Masukkan jumlah waktu dalam detik: ");
    scanf("%d", &detik);

    jam = detik / 3600;        // Menghitung jumlah jam
    sisa_detik = detik % 3600; // Menghitung sisa detik setelah dihitung jam
    menit = sisa_detik / 60;   // Menghitung jumlah menit
    sisa_detik = sisa_detik % 60; // Menghitung sisa detik setelah dihitung menit

    printf("Hasil Output: %d Jam, %d Menit, %d Detik\n", jam, menit, sisa_detik);

    return 0;
}
