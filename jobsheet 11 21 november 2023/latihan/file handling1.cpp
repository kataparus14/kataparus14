#include <stdio.h>

int main()
{
	char buff[225];
	FILE *fptr;
	
	//membuka file 
	if((fptr = fopen("puisi.txt","r")) == NULL){
		printf("error: file tidak ada!");
		//tutup programm karena file ga ada
		exit(1);
	}
	
	//baca isi file dengan gets lalu simpan ke buff
	fgets(buff, 255, fptr);
	//tampilkan isi fiale
	printf("%s", buff);
	
	//tutup filr
	fclose(fptr);
}