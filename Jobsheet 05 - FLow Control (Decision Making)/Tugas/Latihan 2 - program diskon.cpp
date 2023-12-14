/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include<stdio.h>

int main(){
	int th, diskon, tb;
	
	printf("masukkan total harga : Rp.");
	scanf("%d", &th);
	
	if (th <= 75000){
		diskon = th * 0.05;
		printf("total diskon : Rp.%d", diskon);
	}
	
	else if (th > 75000){
		diskon = th * 0.15;
		printf("total diskon : Rp.%d", diskon);
	}
	
	else if (th > 125000){
		diskon = th * 0.25;
		printf("total diskon : Rp.%d", diskon);
	}
	
	else
	printf("angka yang dimasukkan salah");
	
	tb = th - diskon;
	printf("\njadi total bayar : Rp.%d", tb);
}
