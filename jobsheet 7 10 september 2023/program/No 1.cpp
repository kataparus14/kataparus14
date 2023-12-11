//created by fhandy nofalino akhsan 23343065

#include <stdio.h>

int main(){
	//mendefinisikan array untuk enyimpan nialai mahasiswa
	int nilai[20];
	
	//meminta pengguna memasukkan nilai untuk setiap mahasiswa
	printf("Masukkan nilai untuk 20 mahasiswa:\n");
	for (int i = 0; i < 20; i++) {
		printf("Nilai mahasiswa %d: ", i + 1);
		scanf("%d", &nilai[i]);
	}
	
	//menghitung rata rata nilai
	int total = 0;
	for (int i = 0; i < 20; i++) {
		total += nilai[i];
	}
	
	//menghitung rata rata dan menampilkannya
	float rata_rata = (float)total / 20;
	printf("Rata-rata nialai mahasiswa: %.2f\n", rata_rata);
	
	return 0;
}

