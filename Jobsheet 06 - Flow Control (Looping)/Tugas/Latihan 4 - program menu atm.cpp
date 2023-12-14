/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>

char no_rek[] = "0123";
char nama_akun[] = "Hattori";
float saldo = 175000;

int main() {
    while (1) {
        printf("\nATM\n");
        printf("=====\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");

        int pilihan;
        float jumlah;

        printf("Pilih menu : ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
            	printf("Nomor rekening : %s\n", no_rek);
                printf("Nama Akun : %s\n", nama_akun);
                printf("Saldo Anda saat ini adalah Rp.%.2f\n", saldo);
                break;
            case 2:
                printf("Masukkan jumlah setoran : Rp.");
                scanf("%f", &jumlah);
                if (jumlah > 0) {
                    saldo += jumlah;
                    printf("Setoran berhasil.\n");
                    printf("Nomor rekening : %s\n", no_rek);
                    printf("Nama Akun : %s\n", nama_akun);
                    printf("Saldo Anda : Rp.%.2f\n", saldo);
                } else {
                    printf("Jumlah setoran harus lebih dari 0.\n");
                }
                break;
            case 3:
                printf("Masukkan jumlah penarikan: Rp. ");
                scanf("%f", &jumlah);
                if (jumlah > 0) {
                    if (saldo - jumlah >= 50000) {
                        saldo -= jumlah;
                        printf("Penarikan berhasil.\n");
	                    printf("Nomor rekening : %s\n", no_rek);
	                    printf("Nama Akun : %s\n", nama_akun);
                    	printf("Saldo Anda : Rp.%.2f\n", saldo);	                    
                    } else {
                        printf("Saldo tidak mencukupi.\n");
                    }
                } else {
                    printf("Jumlah penarikan harus lebih dari 0.\n");
                }
                break;
            case 4:
                printf("Terima kasih telah menggunakan layanan ATM.\n");
                return 0;
            default:
                printf("Pilihan tidak valid. Silakan pilih menu yang benar.\n");
        }
    }
return 0;
}
