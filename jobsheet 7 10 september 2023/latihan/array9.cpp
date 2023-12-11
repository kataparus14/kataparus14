#include <stdio.h>

int main(){
	
	char title[] = "belajar string.h pada bahasa C";
	char title_copy[20];
	
	//copy string title ke title_copy
	strcpy(title_copy, title);
	
	//maka sekarang title_copy akan berisi:
	printf("isi title_copy: %s\n", title_copy);
}