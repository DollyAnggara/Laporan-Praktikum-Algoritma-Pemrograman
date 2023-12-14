/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include<stdio.h>

int main(){
	int diameter = 12;
	int jari_jari = 6;
	double const phi = 3.14;
	float volume;
	float luas_permukaan;
	
	volume = 4.0 / 3.0 * phi * jari_jari * jari_jari * jari_jari;
	luas_permukaan = 4.0 * phi * jari_jari * jari_jari;
	
	printf("volume bola : %0.2f\n", volume);
	printf("luas permukaan : %0.2f\n", luas_permukaan);
	return 0;	
}
