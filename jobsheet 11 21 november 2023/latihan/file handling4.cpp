#include <stdio.h>

int main()
{
	char buff[255];
	char text[255];
	FILE *fptr;
	
	//membuka file untuk ditulis
	fptr = fopen("puisi.txt", "w");
	for(int i = 0; i < 5; i++){
		
		//mengambil input dari user
		printf("isi baris ke-%d: ", i);
		fgets(text, sizeof(text), stdin);
		//menulis ke tesxt file
		fputs(text, fptr);
	}
	
	printf("file berhasil ditulis");

	//tutup file setelah ditulis
	fclose(fptr);
	
	//buka file kembali untuk dibaca
	fptr("puisi.txt", "r");
	
	//baca isi filr dengan gest lalu simpan ke buff
	while(fgets(buff, sizeof(buff), fptr)){
		printf("isi filenya sekarang: %s", buff);
	}
	
	//tutup file
	fclose(fptr);
}