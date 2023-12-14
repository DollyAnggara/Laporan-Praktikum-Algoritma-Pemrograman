/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100];

    printf("Masukkan kalimat: ");
    gets(kalimat);

    int panjang = strlen(kalimat);

    printf("Kebalikannya: ");
    for (int i = panjang - 1; i >= 0; i--) {
        printf("%c", kalimat[i]);
    }

    return 0;
}
