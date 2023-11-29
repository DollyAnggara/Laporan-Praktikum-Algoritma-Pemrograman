#include <stdio.h>

int main(){
	char name(50);
	printf("Hello,siapa nama lengkapmu? \n");
	scanf("%s", &name);
	
	
	printf(" selamat datang %s dalam pemrograman c", &name);
	return 0;
}
