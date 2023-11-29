#include <stdio.h>

float total_beli;
float diskon;
float total_bayar;

void judul(){
	printf("\tProgram Hitung Potongan Harga\n");
	printf("\t=============================\n");
}

float potong(){
	if(total_beli < 1000000){
		diskon = 0;
	}
	else if(total_beli > 1000000 && total_beli < 3000000){
		diskon = 0.2 * total_beli;
	}
	else{
		diskon = 0.35 * total_beli;
	}
}
int main(){
	printf("total pembelian : Rp.");
	scanf("%f", &total_beli);
	
	diskon = potong();
	total_bayar = total_beli - diskon;
	
	printf("Besar diskon : Rp.%.2f\n", diskon);
	printf("Besar yang Harus Dibayarkan : Rp.%.2f", total_bayar);
	
	return 0;	 
}

	

