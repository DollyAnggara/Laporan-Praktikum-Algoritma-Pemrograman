#include <stdio.h>

int main(){
	char nama_mhs[20];
	int n = 3;
	
	for(int i = 0; i < n; i++){
		printf("Masukkan nama mahasiswa ke %d : ", i+1);
		gets(nama_mhs);
	}
return 0;
}