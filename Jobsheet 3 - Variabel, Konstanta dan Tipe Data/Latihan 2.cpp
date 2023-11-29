#include<stdio.h>

int main(){
	float celcius, kelvin, fahrenheit, reamur;
	
	printf("masukkan suhu dalam celcius :");
	scanf("%f", &celcius);
	
	kelvin = celcius + 273.15;
	fahrenheit = celcius * 1.8 + 32;
	reamur = celcius * 0.8;
	
	printf("suhu dalam kelvin : %0.2f\n", kelvin);
	printf("suhu dalam fahrenheit : %0.2f\n", fahrenheit);
	printf("suhu dalam reamur : %0.2f\n", reamur);
	return 0;
}
