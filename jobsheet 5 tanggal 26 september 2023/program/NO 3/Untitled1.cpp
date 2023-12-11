//craetd by fhandy nofalino akhsan 23343065

#include <stdio.h>
#include <math.h>

int main() {
    int pilihan;
    double hasil;

    printf("Pilih bentuk geometri:\n");
    printf("1. Bola\n");
    printf("2. Kubus\n");
    printf("3. Balok\n");
    printf("4. Tabung\n");
    printf("Masukkan pilihan (1/2/3/4): ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1: // Luas Permukaan Bola
            double jariJari;
            printf("Masukkan jari-jari bola: ");
            scanf("%lf", &jariJari);
            hasil = 4 * M_PI * pow(jariJari, 2);
            printf("Luas permukaan bola adalah: %.2lf\n", hasil);
            break;
        
        case 2: // Luas Permukaan Kubus
            double sisi;
            printf("Masukkan panjang sisi kubus: ");
            scanf("%lf", &sisi);
            hasil = 6 * pow(sisi, 2);
            printf("Luas permukaan kubus adalah: %.2lf\n", hasil);
            break;
        
        case 3: // Luas Permukaan Balok
            double panjang, lebar, tinggi;
            printf("Masukkan panjang balok: ");
            scanf("%lf", &panjang);
            printf("Masukkan lebar balok: ");
            scanf("%lf", &lebar);
            printf("Masukkan tinggi balok: ");
            scanf("%lf", &tinggi);
            hasil = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
            printf("Luas permukaan balok adalah: %.2lf\n", hasil);
            break;
        
        case 4: // Luas Permukaan Tabung
            double jariJariTabung, tinggiTabung;
            printf("Masukkan jari-jari tabung: ");
            scanf("%lf", &jariJariTabung);
            printf("Masukkan tinggi tabung: ");
            scanf("%lf", &tinggiTabung);
            hasil = 2 * M_PI * jariJariTabung * (jariJariTabung + tinggiTabung);
            printf("Luas permukaan tabung adalah: %.2lf\n", hasil);
            break;
        
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
