#include <stdio.h>

int main(){
	//mrmbuat variabel
	int umur = 19;
	float tinggi = 175.6;
	
	//membuat pointer
	int *pointer_umur = &umur;
	int *pointer = &umur;
	float *p_tinggi = &tinggi;
	
	//mencetak alamat memori variabel
	printf("alamat memori variabel 'umur' = %d\n", &umur);
	printf("alamat memori variabel 'tinggi' = %d\n", &tinggi);
	//mencetak referensi alamt memeorimpointer
	printf("refernsi alamat memori  *pointer_umur = %d\n", pointer_umur);
	printf("refernsi alamat memori  *pointer2 = %d\n", pointer2);
	printf("refernsi alamat memori  *p_tinggi = %d\n", p_tinggi);
}