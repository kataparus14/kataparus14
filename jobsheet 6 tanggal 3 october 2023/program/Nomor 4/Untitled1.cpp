// created by fhandy nofalino akhsan 23343065

#include <stdio.h>

// Fungsi untuk mengecek saldo
void cekSaldo(float saldo) {
    printf("Saldo Anda saat ini: %.2f\n", saldo);
}

// Fungsi untuk melakukan setoran
float setoran(float saldo, float jumlah) {
    saldo += jumlah;
    printf("Setoran berhasil. Saldo Anda saat ini: %.2f\n", saldo);
    return saldo;
}

// Fungsi untuk melakukan penarikan tunai
float penarikanTunai(float saldo, float jumlah) {
    if (jumlah > saldo) {
        printf("Saldo tidak mencukupi untuk melakukan penarikan.\n");
    } else {
        saldo -= jumlah;
        printf("Penarikan tunai berhasil. Saldo Anda saat ini: %.2f\n", saldo);
    }
    return saldo;
}

int main() {
    float saldo = 1000.0; // Saldo awal

    int pilihan;
    float jumlah;

    do {
        // Menampilkan menu ATM
        printf("\nATM\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu (1-4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                cekSaldo(saldo);
                break;
            case 2:
                printf("Masukkan jumlah setoran: ");
                scanf("%f", &jumlah);
                saldo = setoran(saldo, jumlah);
                break;
            case 3:
                printf("Masukkan jumlah penarikan tunai: ");
                scanf("%f", &jumlah);
                saldo = penarikanTunai(saldo, jumlah);
                break;
            case 4:
                printf("Terima kasih. Sampai jumpa!\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan pilih kembali.\n");
        }

    } while (pilihan != 4);

    return 0;
}
