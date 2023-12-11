#include <stdio.h>

int main(){
	int nilai;
	char grade;
	
	printf("=== program grade nilai ===\n");
	printf("inputkan nilai: ");
	scanf("%i", &nilai);
	
	// menggunakan percabangan if/esle/if
	if (nilai >= 90) {
		grade = 'A';
	}else if (nilai >= 80) {
		grade = 'B'; //seharusnya B+
	}else if (nilai >= 70) {
		grade = 'B';
	}else if (nilai >= 60) {
		grade = 'C'; //seharusnya C+
	}else if (nilai >= 50) {
		grade = 'C';
	}else if (nilai >= 40) {
		grade = 'D';
	}else if (nilai >= 30) {
		grade = 'E';
	}else {
		grade = 'F';
	}
	
	printf("nilai: %i\n", nilai);
	printf("grade anda: %c\n", grade);
}