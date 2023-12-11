#include <stdio.h>

int main(){
	//membuat variabel
	char name[20], web_address[30];
	
	printf("nama: ");
	scanf("%s", &name);
	
	printf("alamat web: ");
	scanf("%s", &web_address);
	
	printf("\n-------------------------------\n");
	printf("nama yang diinputkan: %s\n", name);
	printf("alamat web yang diinputkan: %s\n", web_address);
	
	return 0;
}