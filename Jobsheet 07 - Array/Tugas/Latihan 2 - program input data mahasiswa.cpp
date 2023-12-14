/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>

int main() {
    char nama_mhs[20][50];
    int n;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);
    fflush(stdin);

    for (int i = 0; i < n; i++) {
        printf("Input nama mahasiswa %d: ", i + 1);
        gets(nama_mhs[i]);
        fflush(stdin);
    }

    printf("\nData Mahasiswa:\n");
    for (int i = 0; i < n; i++) {
        printf("Mahasiswa  ke-%d: %s\n", i + 1, nama_mhs[i]);
    }

    return 0;
}
