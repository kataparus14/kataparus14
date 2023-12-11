#include <stdio.h>

int add_score(int score){
	score = score + 5;
}

int main(){
	int score = 0;
	
	printf("score sebelum diubah: %d\n", score);
	add_score(score);
	intf("score setelah diubah: %d\n", score);
}