#include <stdio.h>

int main(){
	char operasi; 
	int angka1, angka2;
	
	printf("masukkan operator (+, -, *, /, %) :");
	scanf("%c", &operasi);
	printf("masukkan dua bilangan : ");
	scanf("%d %d", &angka1, &angka2);
	
	switch (operasi){
		case '+' :
		printf("%d + %d = %d", angka1, angka2, angka1 + angka2);
		break;
		
		case '-' :
		printf("%d - %d = %d", angka1, angka2, angka1 - angka2);
		break;
		
		case '*' :
		printf("%d * %d = %d", angka1, angka2, angka1 * angka2);
		break;
		
		case '/' :
		printf("%d / %d = %d", angka1, angka2, angka1 / angka2);
		break;
		
		case '%' :
		printf("%d % %d = %d", angka1, angka2, angka1 % angka2);
		break;
		
	default :
 	printf("operasi salah");	
	}
	return 0;
}
