/*
Nama  : DOllY ANGGARA
NIM   : 23343034
Prodi : Informatika
*/
#include <stdio.h>

int main() {

    char nama[50], nim[20], jurusan[50], prodi[50], karakter;
    int jumlahMahasiswa;
    FILE *file;
    
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);
    getchar();

    file=fopen("datamahasiswa.txt", "w");
    for (int i = 1; i <= jumlahMahasiswa; i++) {
        printf("\nMasukkan data mahasiswa ke-%d\n", i);
        printf("Nama: ");
		fgets(nama, sizeof(nama), stdin);
        printf("NIM: ");
		fgets(nim,sizeof(nim), stdin);
        printf("Jurusan: ");
		fgets(jurusan, sizeof(jurusan), stdin);
        printf("Program Studi: ");
		fgets(prodi, sizeof(prodi), stdin);

		fprintf(file, "Data Mahasiswa ke-%d\n", i);
        fprintf(file, "Nama: %s", nama);
        fprintf(file, "NIM: %s", nim);
        fprintf(file, "Jurusan: %s", jurusan);
        fprintf(file, "Program Studi: %s\n", prodi);
    }
    fclose(file);

    printf("Data mahasiswa telah disimpan dalam file datamahasiswa.txt.");

    return 0;
}