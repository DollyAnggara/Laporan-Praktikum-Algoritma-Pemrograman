/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include<stdio.h>

int main(){
	float uang_rupiah;
	float kurs_dollar = 14250.00;
	float jumlah_uang;
	
	printf("masukkan jumlah uang anda : Rp.");
	scanf("%f", &uang_rupiah);
	
	jumlah_uang = uang_rupiah / kurs_dollar;
	
	printf("jumlah uang dalam dollar : %0.2f$\n", jumlah_uang);
	return 0;
}
