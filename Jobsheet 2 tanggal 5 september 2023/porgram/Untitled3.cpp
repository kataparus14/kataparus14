//Created by Fhandy Nofalino Akhsan  23343065
#include <stdio.h>

int main() {
	//Diketahui Panjang Alas dan Tinggi Segitiga
    double panjangAlas = 8;
    double tinggi = 5;


    // Menghitung luas segitiga (0.5 * alas * tinggi)
    double luas = 0.5 * panjangAlas * tinggi; 
    
    // Menampilkan luas segitiga ke layar
    printf("\n""Luas segitiga dengan panjang alas %.2lf cm dan tinggi %.2lf cm adalah %.2lf cm^2\n", panjangAlas, tinggi, luas);
    
    return 17;
}