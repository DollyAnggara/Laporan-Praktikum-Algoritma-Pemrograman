#include<stdio.h>

float a, b;

void judul(){
	printf("\tProgram Perhitungan Aritmatika\n");
	printf("\t==============================\n");
}

void pertambahan(){
	printf("Masukkan dua bilangan : ");
	scanf("%f %f", &a, &b);
	printf("%.2f + %.2f = %.2f", a, b, a+b);
}

void pengurangan(){
	printf("Masukkan dua bilangan : ");
	scanf("%f %f", &a, &b);
	printf("%.2f - %.2f = %.2f", a, b, a-b);
}

void perkalian(){
	printf("Masukkan dua bilangan : ");
	scanf("%f %f", &a, &b);
	printf("%.2f * %.2f = %.2f", a, b, a*b);
}

void pembagian(){
	printf("Masukkan dua bilangan : ");
	scanf("%f %f", &a, &b);
	if(b == 0){
		printf("Tidak bisa dibagi dengan 0!");
	}else{
		printf("%.2f / %.2f = %.2f", a, b, a/b);
	}
}

int main(){
	char pilih;
	
	judul();
	printf("Menu :\n");
	printf("1. Pertambahan\n");
	printf("2. Pengurangan\n");
	printf("3. Perkalian\n");
	printf("4. Pembagian\n");
	printf("Masukkan pilihan Anda (+, -, *, /) : ");
	scanf(" %c", &pilih);

	switch(pilih){
		case '+' :
			pertambahan();
			break;
		case '-' :
			pengurangan();
			break;
		case '*' :
			perkalian();
			break;
		case '/' :
			pembagian();
			break;
		default : 
			printf("Pilihan tidak ada");
			break;
	}
	
	return 0;
}
