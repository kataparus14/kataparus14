//created by fhandy nofalino akhsan 23343065

#include <stdio.h>

int main() {
	int jumlahMahasiswa;
	
	//meminta pengguna untuk memasukkan jumlah mahasiswa
	printf("Input banyak siswa: ");
	scanf("%d", &jumlahMahasiswa);
	
	//membuat array untuk menyimpan nama mahasiswa
	char namaMahasiswa[jumlahMahasiswa][50]; //maksimal panjang nama: 49 karakter
	
	//meminta pengguna memasukkan nama mahasiswa 
	for (int i = 0; i < jumlahMahasiswa; i++) {
		printf("Input nama mahasiswa %d: ", i + 1);
		scanf("%s", namaMahasiswa[i]);
	}
	
	//menampilkan nama nama mahasiswa
	for (int i = 0; i < jumlahMahasiswa; i++) {
		printf("Nama mahasiswa ke-%d: %s\n", i + 1, namaMahasiswa[i]);
	}
	
	return 0;
}