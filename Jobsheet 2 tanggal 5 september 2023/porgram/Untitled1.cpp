//created by Fhandy Nofalino Akhsan 23343065
#include <stdio.h>

int main (){
    
	char Nama[20];
	
	printf("Hello, siapa nama lengkapmu?\n");
	printf("Nama: ");
	fgets(Nama, sizeof(Nama), stdin);
	
	printf("Selamat Datang %s dalam pemograman C", Nama);
	return 17;
}