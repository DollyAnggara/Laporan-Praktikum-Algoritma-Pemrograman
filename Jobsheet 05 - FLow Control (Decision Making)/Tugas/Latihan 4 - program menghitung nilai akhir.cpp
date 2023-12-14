/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>

int main(){
    int kehadiran, tugas, uts, uas;
    float nilai_akhir;
    
    printf("\tMenghitung Nilai Akhir\n");
    printf("\t======================\n");
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%d", &kehadiran);
    printf("Masukkan nilai tugas (0-100): ");
    scanf("%d", &tugas);
    printf("Masukkan nilai UTS (0-100): ");
    scanf("%d", &uts);
    printf("Masukkan nilai UAS (0-100): ");
    scanf("%d", &uas);
    printf("================================\n"),
    
	nilai_akhir = (0.2 * kehadiran) + (0.2 * tugas) + (0.25 * uts) + (0.35 * uas);
	
	if (nilai_akhir >= 91 && nilai_akhir <= 100) {
		printf("Nilai akhir : %.2f\n", nilai_akhir);
    	printf("Nilai huruf : A\n");
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!");   
    }
    else if (nilai_akhir >= 86) {
		printf("Nilai akhir : %.2f\n", nilai_akhir);
    	printf("Nilai huruf : A-\n");
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!"); 
    }
    else if (nilai_akhir >= 81) {
		printf("Nilai akhir : %.2f\n", nilai_akhir);
    	printf("Nilai huruf : B+\n");
		printf("Anda lulus dengan baik,tingkatkan terus belajarnya!"); 
	}
    else if (nilai_akhir >= 76) {
		printf("Nilai akhir : %.2f\n", nilai_akhir);
    	printf("Nilai huruf : B\n");
        printf("Anda lulus dengan baik,tingkatkan terus belajarnya!");  
    }
    else if (nilai_akhir >= 66) {
		printf("Nilai akhir : %.2f\n", nilai_akhir);
    	printf("Nilai huruf : B-\n");
		printf("Anda lulus dengan baik,tingkatkan terus belajarnya!");
    }
    else if (nilai_akhir >= 56) {
		printf("Nilai akhir : %.2f\n", nilai_akhir);
    	printf("Nilai huruf : C\n");
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!");  
    }
    else if (nilai_akhir >= 45) {
 		printf("Nilai akhir : %.2f\n", nilai_akhir);
    	printf("Nilai huruf : D\n");
    	printf("Maaf, anda tidak lulus!");	 
   	}
    else {
  		printf("Nilai akhir : %.2f\n", nilai_akhir);
    	printf("Nilai huruf : E\n");
		printf("Maaf, anda tidak lulus!");
	}
	return 0;
}