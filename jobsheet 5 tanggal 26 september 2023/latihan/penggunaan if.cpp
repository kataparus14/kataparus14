#include <stdio.h>

int main(){
	printf("== program pembayaran ==\n");
	int total_belanja = 0;
	
	printf("inputkan total belanja: ");
	scanf("%i", &total_belanja);
	
	//menggunakan blok percabangan if
	if( total_belanja > 100000){
		printf("selamat anda meendapatkan hadiah!\n");
	}
	
	printf("terimakasih telah berbelanja di toko kami\n\n");
}