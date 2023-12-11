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
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	fgets(buff, sizeof(buff), fptr);
	printf("%s", buff);
	
	//tutup filr
	fclose(fptr);
}