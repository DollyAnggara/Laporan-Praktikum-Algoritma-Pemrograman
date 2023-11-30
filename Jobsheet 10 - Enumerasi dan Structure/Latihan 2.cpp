#include <stdio.h>

struct Zodiac {
    int harimulai;
    int bulanmulai;
    int hariselesai;
    int bulanselesai;
    const char *nama;
};

const char *tentukanZodiak(int hari, int bulan, struct Zodiac zodiak[], int jumlahZodiak) {
    for (int i = 0; i < jumlahZodiak; i++) {
        if ((bulan == zodiak[i].bulanmulai && hari >= zodiak[i].harimulai) ||
            (bulan == zodiak[i].bulanselesai && hari <= zodiak[i].hariselesai)) {
            return zodiak[i].nama;
        }
    }
    return "Tidak Diketahui";
}

int main() {
    struct Zodiac zodiak[] = {
        {21, 3, 19, 4, "ARIES"},
        {20, 4, 20, 5, "TAURUS"},
        {21, 5, 20, 6, "GEMINI"},
        {21, 6, 22, 7, "CANCER"},
        {23, 7, 22, 8, "LEO"},
        {23, 8, 22, 9, "VIRGO"},
        {23, 9, 22, 10, "LIBRA"},
        {23, 10, 21, 11, "SCORPIO"},
        {22, 11, 21, 12, "SAGITTARIUS"},
        {22, 12, 19, 1, "CAPRICORN"},
        {20, 1, 18, 2, "AQUARIUS"},
        {19, 2, 20, 3, "PISCES"}
    };

    int tgl, bln, tahun;
    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tgl, &bln, &tahun);

    const char *zodiakAnda = tentukanZodiak(tgl, bln, zodiak, sizeof(zodiak) / sizeof(zodiak[0]));

    printf("Zodiak Anda adalah : %s\n", zodiakAnda);

    return 0;
}
