#include <stdio.h>

int main(){
	char username[30], password[30];
	
	printf("=== welcome to awesome program ===\n");
	printf("username: ");
	scanf("%s", &username);
	printf("password: ");
	scanf("%s", &password);
	
	if(strcmp(username, "petanikode") == 0){
		if(strcmo(password, "kopi") == 0){
			printf("selamat datang bos!\n");
		} else {
			printf("password salah, coba lagi!\n");
		}
	} else {
		printf("anda belum terdaftar\n");
	}
	
	
}