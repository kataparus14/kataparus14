//craeted by fhandy nofalino akhsan 23343065

#include <stdio.h>

int main() {
    char choice;
    double num1, num2, result;

    printf("Pilih operasi:\n");
    printf("a) Penjumlahan\n");
    printf("b) Pengurangan\n");
    printf("c) Perkalian\n");
    printf("d) Pembagian\n");
    printf("e) Hasil Bagi\n");

    printf("Masukkan pilihan Anda (a/b/c/d/e): ");
    scanf(" %c", &choice);

    printf("Masukkan dua angka: ");
    scanf("%lf %lf", &num1, &num2);

    switch (choice) {
        case 'a':
            result = num1 + num2;
            printf("Hasil penjumlahan: %.2lf\n", result);
            break;
        case 'b':
            result = num1 - num2;
            printf("Hasil pengurangan: %.2lf\n", result);
            break;
        case 'c':
            result = num1 * num2;
            printf("Hasil perkalian: %.2lf\n", result);
            break;
        case 'd':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Hasil pembagian: %.2lf\n", result);
            } else {
                printf("Tidak dapat melakukan pembagian oleh 0.\n");
            }
            break;
        case 'e':
            if (num2 != 0) {
                result = ((int)num1) / ((int)num2);
                printf("Hasil bagi (hasil pembulatan ke bawah): %.0lf\n", result);
            } else {
                printf("Tidak dapat melakukan hasil bagi oleh 0.\n");
            }
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}
