#include <stdio.h>

int main() {
	//deklarasi array of char
	char nama[20];
	
	printf("masukkan nama anda: ");
	gets(nama);
	
	printf("hello, %s. salam kenal.", nama);
	
	return 0;
}