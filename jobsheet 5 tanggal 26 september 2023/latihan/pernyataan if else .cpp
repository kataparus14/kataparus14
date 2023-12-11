#include <stdio.h>

int main(){
	//membuat array karakter untuk menyimpan password
	char password[30];
	
	printf("=== program login ===\n");
	printf("masukkan password: ");
	scanf("%s", &password);
	
	//percabangan if/esle
	if( strcmp(password, "kopi") == 0 ){
		printf("selamat datang bos!\n");
	} else {
		printf("password salah, coba lagi!\n");
	}
	
	printf("terimakasih sudah mengguanakn aplikasi ini!\n");
}