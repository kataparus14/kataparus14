// created byFhandy Nofalino Akhsan 23343065

#include <stdio.h>

int main() {
    int durasi = 3; // Durasi peminjaman dalam jam
    int tarif_pertama = 15000; // Tarif pertama dalam Rupiah per jam
    float tarif_berikutnya = 0.5 * tarif_pertama; // Tarif berikutnya dalam Rupiah per jam (50% dari tarif pertama)

    // Hitung total biaya
    int total_biaya = tarif_pertama + (durasi - 1) * tarif_berikutnya;

    printf("Durasi peminjaman: %d jam\n", durasi);
    printf("Biaya sewa: Rp %d\n", total_biaya);

    return 0;
}
