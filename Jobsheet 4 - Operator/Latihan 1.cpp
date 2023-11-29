#include <stdio.h>

int main(){
	int jam,satu_jam, menit,satu_menit, detik, sisa_detik;
	
	printf("masukkan detik :");
	scanf("%d", &detik);
	
	jam = detik / 3600;
	satu_jam = detik - 3600;
	menit = satu_jam / 60;
	satu_menit = satu_jam - 60;
	sisa_detik = satu_menit % 60;
	
	printf("%d detik sama dengan = %d jam, %d menit, %d detik",detik, jam , menit, sisa_detik);
	return 0;
	
}