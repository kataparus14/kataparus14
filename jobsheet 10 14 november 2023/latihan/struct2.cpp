#include <stdio.h>
struct student
{
	char name[50];
	int age;
};

int main(){
	struct student s1;
	
	printf("enter name: ");
	scanf("%[^\n]%*c", s1.name);
	
	printf("enter age: ");
	scanf("%d", &s1.age);
	
	display(s1); //passing structure as an argument
}

//membuat fungsi dengan struct sebagai parameter
void display(struct studen s) {
	pringtf("\nDisplaying information\n");
	rpintf("name: %s", s.name);
	printf("\nRoll: %d", s.age);
}