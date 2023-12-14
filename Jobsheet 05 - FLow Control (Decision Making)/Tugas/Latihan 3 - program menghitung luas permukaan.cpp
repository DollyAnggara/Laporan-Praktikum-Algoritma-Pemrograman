/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>

int main (){
	int s, p, l ,t, operasi;
	float r, lp;
	
	printf("mencari luas permukaan\n");
	printf("----------------------\n");
	printf("1.luas permukaan bola\n");
	printf("2.luas permukaan balok\n");
	printf("3.luas permukaan kubus\n");
	printf("4.luas permukaan tabung\n");
	printf("masukkan pilihan anda : ");
	scanf("%d", &operasi);
	
	switch(operasi){
		
		case 1:
		printf("masukkan jari-jari :");
		scanf("%f", &r);
		lp = 4 * 3.14 * r * r;
		printf("Luas permukaan bola: %.2f", lp);
		break;
			
		case 2:
		printf("masukkan panjang balok :");
		scanf("%d", &p);
		printf("masukkan lebar balok :");
		scanf("%d", &l);
		lp = 2 * (p * l + p * t + l * t);
		printf("Luas permukaan balok: %.2f", lp);
		break;
			
		case 3:
		printf("masukkan sisi kubus :");
		scanf("%d", &s);
		lp = 6 * s;
		printf("Luas permukaan kubus: %.2f", lp);
		break;
			
		case 4:
		printf("masukkan jari-jari");
		scanf("%f", &r);
		lp = 2 * 3.14 * r * r * t;
		printf("Luas permukaan tabung: %.2f", lp);
		break;
		
	default :
 	printf("operasi salah");				
		}
	return 0;
}
