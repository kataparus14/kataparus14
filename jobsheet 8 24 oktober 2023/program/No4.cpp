//crated by fhandy nofalino akhsan 23343065

#include <stdio.h>

// Function declarations
float potong(float total);

int main() {
    float total_pembelian;

    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.): ");
    scanf("%f", &total_pembelian);

    float diskon = potong(total_pembelian);
    float total_bayar = total_pembelian - diskon;

    printf("Besar Diskon: %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan: %.2f\n", total_bayar);

    return 0;
}

// Function definitions
float potong(float total) {
    if (total < 1000000) {
        return 0;
    } else if (total >= 1000000 && total < 3000000) {
        return 0.2 * total;
    } else {
        return 0.35 * total;
    }
}
