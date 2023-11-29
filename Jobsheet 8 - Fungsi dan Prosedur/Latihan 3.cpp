#include<stdio.h>

float phi = 3.14;
int r;

void judul(){
	printf("\tProgram Menghitung Luas Dan Keliling Lingkaran\n");
	printf("\t==============================================\n");
}

void luas(){
	printf("masukkan jari-jari lingkaran : ");
	scanf("%d", &r);
	printf("luas lingkaran = %.2f", phi*r*r);
}
void keliling(){
	printf("masukkan jari-jari lingkaran : ");
	scanf("%d", &r);
	printf("Keliling lingkaran = %.2f", 2*phi*r);
}

int main(){
	int opsi;
	
	judul();
	printf("Hitung\n");
	printf("1.luas lingkaran\n");
	printf("2.Keliling lingkaran\n");
	printf("Masukkan Pilihan : ");
	scanf("%d", &opsi);
	
	switch(opsi){
		case 1 :
			luas();
			break;
		case 2 :
			keliling();
			break;
		default :
			printf("Pilihan tidak valid.");
			break;
	}
	return 0;
}