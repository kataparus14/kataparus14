//created by Fhandy Nofalino Akhsan 23343065

#include <stdio.h>

int main() {
    // Deklarasi variabel
    char namaPembeli[50];
    char namaBarang[50];
    float hargaSatuan;
    int jumlahBarang;
    float hargaTotal;

    // Meminta input dari pengguna
    printf("Masukkan nama pembeli: ");
    scanf("%s", namaPembeli);

    printf("Masukkan nama barang: ");
    scanf("%s", namaBarang);

    printf("Masukkan harga barang satuan: ");
    scanf("%f", &hargaSatuan);

    printf("Masukkan jumlah barang yang dibeli: ");
    scanf("%d", &jumlahBarang);

    // Menghitung harga total
    hargaTotal = hargaSatuan * jumlahBarang;

    // Menampilkan hasil
    printf("\n===== Struk Pembelian =====\n");
    printf("Nama Pembeli: %s\n", namaPembeli);
    printf("Nama Barang: %s\n", namaBarang);
    printf("Harga Barang Satuan: %.2f\n", hargaSatuan);
    printf("Jumlah Barang: %d\n", jumlahBarang);
    printf("Harga Total: %.2f\n", hargaTotal);

    return 0;
}
