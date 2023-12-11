#include <stdio.h>

int main(){
	
	char ulangi = 'y';
	int counter = 0;
	
	do {
		printf("apakah kamu mau mengulang?\n");
		printf("jawab (y/t): ");
		scanf(" %C", &ulangi);
		
		//increment counter 
		counter++;
	} while(ulangi == 'y');
	
	printf("\n\n---------------------\n");
	printf("perulangan selesai!\n");
	printf("kmau mengulang sebanyak %i kali.\n", counter);
}
