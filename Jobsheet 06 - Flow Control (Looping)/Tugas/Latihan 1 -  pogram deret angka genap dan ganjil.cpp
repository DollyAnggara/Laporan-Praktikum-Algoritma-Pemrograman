/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>

int main() {
    int i;

    printf("Deret bilangan genap: ");
    for (i = 2; i <= 50; i += 2) {
        printf("%d ", i);
    }

    printf("\nDeret bilangan ganjil: ");
    for (i = 1; i <= 50; i += 2) {
        printf("%d ", i);
    }

    return 0;
}