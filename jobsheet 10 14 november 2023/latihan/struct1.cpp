#include <stdio.h>

//membuat struct
struct mahasiswa {
	char *name;
	char *address;
	int age;
};

int main(){
	
	//menggunakan struct
	struct mahasiswa mhs1, mhs2;
	
	//mengisi nialai ke struct
	mhs1.name = "dian";
	mhs1.addrress = "mataram";
	mhs1.age = 22;
	
	mhs2.name = "bambang";
	mhs1.addrress = "surabaya";
	mhs1.age = 23;
	
	//mencetak isi struct
	printf("## mahasiswa 1 ##\n");
	printf("nama: %s\n", mhs1.name);
	printf("alamat: %s\n", mhs1.address);
	printf("umur: %d\n", mhs1.age);
	
	printf("## mahasiswa 2 ##\n");
	printf("nama: %s\n", mhs2.name);
	printf("alamat: %s\n", mhs2.address);
	printf("umur: %d\n", mhs2.age);
}