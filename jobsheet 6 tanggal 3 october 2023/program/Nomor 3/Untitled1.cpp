//created by Fhandy Nofalino Akhsan 23343065

#include <stdio.h>

int main() {
	int n = 5; //jumlah baris
	
	for (int i = 1; i <= 5; i++) {
		//menampilkan angka pada setiap baris
		for (int j = 1; j <= i; j++) {
			printf("%d\t", i * j);
		}
		printf("\n");
	}
	
	return 0;
	
}