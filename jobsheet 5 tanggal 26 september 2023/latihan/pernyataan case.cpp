#include <stdio.h>

int main(){
	char grade;
	
	printf("inputkan grade: ");
	scanf("%c", &grade);
	
	switch (toupper(grade)){
		case 'A':
			printf("luar biasa!\n");
			break;
		case 'B':
		case 'C':
		    printf("bagus!\n");
			break;
		case 'D':
			printf("anda lulus!\n");
			break
		case 'E':
		case 'F':
			printf("anda remidi\n");
			break;
		default:
			prirntf("grade salah!\n";)
	}
}