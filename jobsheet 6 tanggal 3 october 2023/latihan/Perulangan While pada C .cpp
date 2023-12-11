#include <stdio.h>

int main(){
	char ulangi = 'y';
	int counter = 0;
	
	//perulangan while
	while(ulangi == 'y'){
		printf("apakah kamu mau mengulang?\n");
		printf("jawab (y/t): ");
		scanf(" %C", &ulangi);
		
		//increment counter
		counter++;
	}
	
	printf("\n\n-------------------\n");
	printf("perulangan selesai!\n");
	printf("kamu mengulang sebanayk %i kali.\n", counter);
}