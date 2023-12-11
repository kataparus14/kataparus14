#include <stdio.h>

int main(){
	char name[50], email[50];
	
	printf("nama: ");
	fgets(name,  sizeof(name), stdin);
	
	printf("email: ");
	fgets(email, sizeof(email), stdin);
	
	printf("\n-------------------------\n");
	printf("nama anda: %s", name);
	printf("alamat email: %s", email);
	
	return 0;
}