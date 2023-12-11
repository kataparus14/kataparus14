//created by fhandy nofalino akhsan 23343065

#include <stdio.h>
#include <string.h>

typedef struct {
    int awal_hari;
    int akhir_hari;
    char zodiak[20];
} Zodiak;

int main() {
    int tgl_lahir, bln_lahir, thn_lahir;
    char zodiak[20];

    Zodiak zodiak_kelahiran[12] = {
        {20, 31, "Aquarius"},
        {19, 29, "Pisces"},
        {21, 31, "Aries"},
        {20, 30, "Taurus"},
        {21, 31, "Gemini"},
        {21, 30, "Cancer"},
        {23, 31, "Leo"},
        {23, 31, "Virgo"},
        {23, 30, "Libra"},
        {23, 31, "Scorpio"},
        {22, 30, "Sagittarius"},
        {22, 31, "Capricorn"}
    };

    printf("Masukkan tanggal lahir Anda [tgl-bln-tahun]: ");
    scanf("%d-%d-%d", &tgl_lahir, &bln_lahir, &thn_lahir);

    if (bln_lahir < 1 || bln_lahir > 12) {
        printf("Bulan kelahiran tidak valid.\n");
        return 1;
    }

    Zodiak zodiak_bulan = zodiak_kelahiran[bln_lahir - 1];

    if (tgl_lahir < zodiak_bulan.awal_hari || tgl_lahir > zodiak_bulan.akhir_hari) {
        printf("Tanggal lahir tidak valid untuk bulan ini.\n");
        return 1;
    }

    strcpy(zodiak, zodiak_bulan.zodiak);

    printf("Tanggal Lahir Anda [tgl-bln-tahun]: %02d-%02d-%04d\n", tgl_lahir, bln_lahir, thn_lahir);
    printf("Zodiak Anda adalah: %s\n", zodiak);

    return 0;
}