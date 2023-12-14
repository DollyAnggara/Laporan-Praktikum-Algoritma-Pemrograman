/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>

int perkalian(int a, int b);

int main(){
	int angka1, angka2;
	printf("masukan dua buah angka :");
	scanf("%d %d", &angka1, &angka2);
	
	printf("%d x %d = %d", angka1, angka2, perkalian(angka1, angka2));
	return 0;
}

int perkalian(int a, int b){
	if(b == 1){
		return a;
	}
	else
		return a + perkalian(a, b-1);
}