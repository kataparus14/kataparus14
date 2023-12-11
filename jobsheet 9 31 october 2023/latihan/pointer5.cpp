#include <stdio.h> 

int add_score(int score){
	score = score + 5;
	printf("score diubah ke %d\n", score);
}

int main(){
	int score = 0;
	
	printf("score sebelum diuabh: %d\n", score);
	add_score(score);
	printf("score setelah diubah: %d\n", score);
}