/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>

#define max_mhs 50

typedef struct{
	int npm;
	char nama[50];
	char tanggal_lahir[20];
	char alamat[100];
	char hp[20];
}data_mhs;

void tambah_mhs(data_mhs *mhs){
	printf("NPM 	 : ");
	scanf("%d", &mhs->npm);
	fflush(stdin);
	printf("NAMA 	 : ");
	gets(mhs->nama);
	fflush(stdin);
	printf("TGL LAHIR: ");
	gets(mhs->tanggal_lahir);
	fflush(stdin);
	printf("ALAMAT 	 : ");
	gets(mhs->alamat);
	printf("HP	 : ");
	gets(mhs->hp);
	fflush(stdin);	
}

void tampil_data(data_mhs mhs){
	printf("%d  %s  %s  %s  %s\n", mhs.npm, mhs.nama ,mhs.tanggal_lahir, mhs.alamat, mhs.hp);
}
int main(){
	data_mhs mhs[max_mhs];
	char tambah;
	int jumlah_mhs = 0;
	
	do{
		tambah_mhs(&mhs[jumlah_mhs]);
		jumlah_mhs++;
		printf("Ingin menambahka lagi(y/n)?: ");
    	scanf(" %c", &tambah);	 
	}
	while (tambah == 'y' || tambah == 'Y') ;
	
	for(int i = 0; i < jumlah_mhs; i++){
		tampil_data(mhs[i]);
	}
	return 0;
}
