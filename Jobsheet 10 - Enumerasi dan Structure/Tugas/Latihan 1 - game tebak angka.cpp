/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum statustebakan {
    terlalu_kecil,
    terlalu_besar,
    benar
};

void mulaiPermainan();

int main() {
    char mainLagi;

    do {
        mulaiPermainan();

        printf("Ingin bermain lagi? (y/n): ");
        scanf(" %c", &mainLagi);
    } while (mainLagi == 'y' || mainLagi == 'Y');
    
    printf("terima kasih telah memainkan permainan ini");

    return 0;
}

void mulaiPermainan() {
    srand(time(NULL));

    int nomorAcak = rand() % 20 + 1;

    int tebakan, percobaan = 0;
    enum statustebakan status;

    printf("Selamat datang di Game Tebak Angka!\n");
    printf("pilih sebuah nomor antara 1 dan 20.\n");

    do {
        printf("Masukkan tebakan Anda: ");
        scanf("%d", &tebakan);

        percobaan++;

        if (tebakan < nomorAcak) {
            printf("Nomor saya lebih besar!\n");
            status = terlalu_kecil;
        } else if (tebakan > nomorAcak) {
            printf("Nomor saya lebih kecil!\n");
            status = terlalu_besar;
        } else {
            printf("Selamat, Anda benar!\n");
            printf("Anda berhasil menebak dalam %d percobaan.\n", percobaan);
            status = benar;
        }
    } while (status != benar);

    printf("\n");
}
