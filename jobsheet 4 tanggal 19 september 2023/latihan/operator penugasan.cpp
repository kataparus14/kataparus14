#include <stdio.h>

void main(){
	int a, b;
	
	//pengisian nialai dengan operator =
	a = 5;
	b = 10;
	
	//pengisian sekaligus penambahan
	b =+a; //ini sama seperti b = b + a
	printf("hasil b += a adalah %d\n", b);
	
	// pengsisan sekaligus pengurangan
	b -= a; // ini sama seperti b = b - a
	printf("hasil b -= a adalah %d\n", b);
	
	// pengsisan sekaligus perkalian
	b *= a; // ini sama seperti b = b * a
	printf("hasil b *= a adalah %d\n", b);
	
	// pengsisan sekaligus pembagian
	b /= a; // ini sama seperti b = b / a
	printf("hasil b /= a adalah %d\n", b);
	
	// pengsisan sekaligus sisa bagi
	b %= a; // ini sama seperti b = b % a
	printf("hasil b %= a adalah %d\n", b);
}