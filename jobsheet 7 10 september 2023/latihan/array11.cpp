#include <stdio.h>

int main(){
	
	char nama[] = "_______________";
	int panjang_nama;
	
	//menghitung panjang nama
	panjang_nama = strlen(nama);
	
	printf("nama\t: %s\n", nama);
	printf("panjang\t: %d Karakter\n", panjang_nama);
}