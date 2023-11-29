#include <stdio.h>

int main(){

    double total_biaya,tarif_berikutnya, tarif_pertama = 15000.0;
    int durasi_film;
    
    printf("durasi menonton Film (dalam jam): ");
    scanf("%d", &durasi_film);
    
	tarif_berikutnya = tarif_pertama * 0.5;
    
    total_biaya = tarif_pertama + (tarif_berikutnya * (durasi_film - 1));

    printf("Total biaya yang harus dibayar adalah: Rp %.2f\n", total_biaya);
    
    return 0;

}