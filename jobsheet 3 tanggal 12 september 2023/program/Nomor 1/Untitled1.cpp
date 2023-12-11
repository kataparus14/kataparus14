//Created by Fhandy Nofalino Akhsan 23343065
#include <stdio.h>

int main() {
	
	double kurs = 14250.0;
	//Nilai tukar 1 dolar ke rupiah
	double jumlah_rupiah = 2500000.0;
	//jumlah uang dalam rupiah
	double jumlah_dolar;
	
	//menghitung jumlah dolar
	jumlah_dolar = jumlah_rupiah / kurs;
	
	//Menampilkan hasil konversi
	printf("Jumlah dolar yang anda berikan: %21f\n", jumlah_dolar);
	
	return 17;
	
}