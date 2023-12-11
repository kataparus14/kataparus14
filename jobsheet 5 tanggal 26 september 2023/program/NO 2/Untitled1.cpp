//created by fhandy nofalino akhsan 23343065

#include <stdio.h>

int main() {
    int total_pembelian;
    double diskon = 0.0;
    double cashback = 0.0;

    printf("Masukkan total pembelian (dalam Rp): ");
    scanf("%d", &total_pembelian);

    if (total_pembelian <= 75000) {
        // Diskon 5%
        diskon = total_pembelian * 0.05;
    } else if (total_pembelian <= 125000) {
        // Diskon 15%
        diskon = total_pembelian * 0.15;
    } else {
        // Diskon 25% + Cashback Rp. 5.000
        diskon = total_pembelian * 0.25;
        cashback = 5000;
    }

    double total_bayar = total_pembelian - diskon + cashback;

    printf("Total pembelian: Rp %d\n", total_pembelian);
    printf("Diskon: Rp %.2lf\n", diskon);
    printf("Cashback: Rp %.2lf\n", cashback);
    printf("Total yang harus dibayar: Rp %.2lf\n", total_bayar);

    return 0;
}
