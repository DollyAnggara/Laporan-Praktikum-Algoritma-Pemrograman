/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main() {
    enum hari sekarang;
    sekarang = RABU;
    printf("Sekarang hari ke-%d", sekarang + 1);
}

