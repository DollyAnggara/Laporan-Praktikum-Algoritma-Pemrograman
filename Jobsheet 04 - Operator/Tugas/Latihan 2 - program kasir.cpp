/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>

int main(){
	char name[30], barang[30];
	int harga_barang, jumlah_barang, harga_total;
	
	printf("masukkan nama pembeli : ");
	scanf("%[^\n]s", &name);
	
	printf("masukkan nama barang : ");
	scanf("%s", &barang);
	
	printf("harga satuan barang : Rp.");
	scanf("%d", &harga_barang);
	
	printf("Jumlah barang : ");
	scanf("%d", &jumlah_barang);
	
	harga_total = harga_barang * jumlah_barang;
	
	printf("\n---------------------\n");
	printf("Nama Pembeli	: %s\n", name);
	printf("Nama barang 	: %s\n", barang);
	printf("Harga satuan 	: Rp.%d\n", harga_barang);
	printf("Jumlah barang 	: %d\n", jumlah_barang);
	printf("Harga Total 	: Rp.%d", harga_total);
	return 0;
}