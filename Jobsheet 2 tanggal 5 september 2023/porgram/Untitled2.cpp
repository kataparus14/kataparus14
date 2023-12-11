//created by Fhandy Nofalino Akhsan 23343065
#include <stdio.h>
int main(){
	char name[20], NIM[20], Prodi[20], Fakultas[20];
	
	//Input Nama
	printf("Nama: ");
	fgets(name, sizeof(name), stdin);
	
	//Input NIM
	printf("NIM: ");
	fgets(NIM, sizeof(NIM), stdin);
	
	//Input Prodi
	printf("Prodi: ");
	fgets(Prodi, sizeof(Prodi), stdin);
	
	//Input Fakultas
	printf("Fakultas: ");
	fgets(Fakultas, sizeof(Fakultas), stdin);

	 // Deklarasi variabel untuk menyimpan nilai-nilai
    double nilaiPratikum, nilaiUTS, nilaiUAS, nilaiAkhir;

    // Meminta input nilai ujian pertama dari pengguna
    printf("Masukkan nilai Pratikum: ");
    scanf("%lf", &nilaiPratikum);

    // Meminta input nilai ujian kedua dari pengguna
    printf("Masukkan nilai UTS: ");
    scanf("%lf", &nilaiUTS);

    // Meminta input nilai tugas dari pengguna
    printf("Masukkan nilai tugas: ");
    scanf("%lf", &nilaiUAS);

    // Menghitung nilai akhir dengan bobot tertentu
    // Misalnya, kita bisa menghitung nilai akhir dengan cara (30% Ujian1) + (30% Ujian2) + (40% Tugas)
    nilaiAkhir = (0.3 * nilaiPratikum) + (0.3 * nilaiUTS) + (0.4 * nilaiUAS);

    
	
	
	
	
	
	//Garis Pembatas (Opsional)
	printf("\n-------------------------------------\n");
	
	//Menampilkan Nama pada layar
	printf("Nama anda: %s\n", &name);
	
	//Menampilkan NIM ke layar
	printf("NIM: %s\n", &NIM);
	
	//Menampilkan Prodi ke layar
	printf("Prodi: %s\n", &Prodi);
	
	//Menampilkan Fakultas ke layar
	printf("Fakultas: %s\n", &Fakultas);
	
	// Menampilkan nilai akhir ke layar
    printf("Nilai akhir Anda adalah: %.2lf\n", nilaiAkhir);
	
	return 17;

}