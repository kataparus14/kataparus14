#include <stdio.h>

int main(){
	char str1[] = "agariadne";
	char str2[] = "agariadne";
	int hasil;
	
	//membandingkan string
	hasil = strcmp(str1, str2);
	
	if(hasil == 0){
		printf("str1 dan str2 sama");
	} else {
		printf("str1 dan str2 berbeda");
	}
}