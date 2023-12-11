#include <stdio.h>

int say_hello(char name[]){
	printf("hello %s!\n", name);
}

int main(){
	say_hello("dian");
	say_hello("petani");
	say_hello("kode");
}