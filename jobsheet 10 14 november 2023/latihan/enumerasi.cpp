#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU};

int main(){
	enum hari sekarang;
		sekarang = RABU;
		printf("ukuran variabell enum: %d bytes\n", sizeof(sekarang));
}