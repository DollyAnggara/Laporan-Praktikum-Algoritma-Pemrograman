#include <stdio.h>

int main() {

    char nama[50], nim[20], jurusan[50], prodi[50];
    int jumlahMahasiswa;
    FILE *file;
    
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);
    getchar();

    file=fopen("datamahasiswa.txt", "w");
    for (int i = 1; i <= jumlahMahasiswa; i++) {
        printf("\nMasukkan data mahasiswa ke-%d\n", i);
        printf("Nama: ");
		gets(nama);
        printf("NIM: ");
		gets(nim);
        printf("Jurusan: ");
		gets(jurusan);
        printf("Program Studi: ");
		gets(prodi);

		fprintf(file, "Data Mahasiswa ke-%d\n", i);
        fprintf(file, "Nama: %s\n", nama);
        fprintf(file, "NIM: %s\n", nim);
        fprintf(file, "Jurusan: %s\n", jurusan);
        fprintf(file, "Program Studi: %s\n\n", prodi);
    }
    fclose(file);

    printf("Data mahasiswa telah disimpan dalam file datamahasiswa.txt.");

    return 0;
}
