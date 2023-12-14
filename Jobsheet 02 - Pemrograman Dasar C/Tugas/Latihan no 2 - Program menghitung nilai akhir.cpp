/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include<stdio.h>

int main(){
	char name[534], nim[362], prodi[365], fakultas[366];
	float nilai_praktikum, nilai_uts, nilai_uas, nilai_akhir;
	
	printf("Siapa namamu :");
	scanf("%[^\n]s", &name);
	
	printf("Berapa nimmu :");
	scanf("%s", &nim);
	
	printf("Sebutkan asal prodimu :");
	scanf("%s", &prodi);
	
	printf("Sebutkan asal fakultasmu :");
	scanf("%s", &fakultas);
	
	printf("Ketikan Nilai Praktikum :");
	scanf("%f", &nilai_praktikum);
	
	printf("Ketikan nilai UTS :");
	scanf("%f", &nilai_uts);
	
	printf("Ketikan nilai UAS :");
	scanf("%f", &nilai_uas);
	
	nilai_akhir = 0.3 * nilai_praktikum + 0.3 * nilai_uts + 0.4 * nilai_uas;
	
	printf("\n---------------------\n");
	printf("nama : %s\n", name);
	printf("nim : %s\n", nim);
	printf("prodi : %s\n", prodi);
	printf("fakultas : %s\n", fakultas);
	printf("nilai praktikum : %.2f\n", nilai_praktikum);
	printf("nilai UTS : %.2f\n", nilai_uts);
	printf("nilai UAS : %.2f\n", nilai_uas);
	printf("nilai Akhir : %.2f\n", nilai_akhir);
	
	return 0;	
}
