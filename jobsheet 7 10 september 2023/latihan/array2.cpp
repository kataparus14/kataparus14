#include <stdio.h>

int main(){
	//isi awalh array
	char huruf[5] = {'a', 'b', 'c', 'd', 'e'};
	
	//mengubah isi array
	huruf[2] = 'z';
	
	//mencetak isi array
	printf("huruf: %c\n", huruf[2]);
}