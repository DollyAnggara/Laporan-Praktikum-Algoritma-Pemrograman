/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>

int main() {

    float nilai_mahasiswa[20];
    float total_nilai = 0;
     float rata_rata ;

    for (int i = 0; i < 20; i++) {
        printf("Masukkan nilai mahasiswa ke-%d: ", i + 1);
        scanf("%f", &nilai_mahasiswa[i]);
        
        total_nilai += nilai_mahasiswa[i];
    }

    rata_rata = total_nilai / 20;

    printf("Rata-rata nilai mahasiswa adalah %.2f\n", rata_rata);

    return 0;
}