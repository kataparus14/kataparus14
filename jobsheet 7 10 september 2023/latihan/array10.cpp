#include <stdio.h>

int main(){
	
	char nama[] = "agariadne D. S.";
	char gelar[] = ", S.kom., M.Pd.T.";
	
	strcat(nama, gelar);
	
	printf("nama lengkap\t: %s\n", nama);
}