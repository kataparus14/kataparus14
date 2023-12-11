//created by fhandy nofalino akhsan 23343065

#include <stdio.h>

int main() {
    float nilai_kehadiran, nilai_tugas, nilai_uts, nilai_uas, nilai_akhir;
    
    // Input nilai kehadiran, tugas, UTS, dan UAS
    printf("Masukkan nilai kehadiran (0-100): ");
    scanf("%f", &nilai_kehadiran);
    
    printf("Masukkan nilai tugas (0-100): ");
    scanf("%f", &nilai_tugas);
    
    printf("Masukkan nilai UTS (0-100): ");
    scanf("%f", &nilai_uts);
    
    printf("Masukkan nilai UAS (0-100): ");
    scanf("%f", &nilai_uas);
    
    // Menghitung nilai akhir
    nilai_akhir = (0.2 * nilai_kehadiran) + (0.2 * nilai_tugas) + (0.25 * nilai_uts) + (0.35 * nilai_uas);
    
    // Menentukan kategori nilai akhir
    char kategori;
    if (nilai_akhir >= 0 && nilai_akhir <= 44) {
        kategori = 'E';
        printf("Maaf, anda tidak lulus!\n");
    } else if (nilai_akhir >= 45 && nilai_akhir <= 55) {
        kategori = 'D';
        printf("Anda lulus, tingkatkan lagi untuk kedepannya!\n");
    } else if (nilai_akhir >= 56 && nilai_akhir <= 65) {
        kategori = 'C';
        printf("Anda lulus, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 66 && nilai_akhir <= 75) {
        kategori = 'B';
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 76 && nilai_akhir <= 80) {
        kategori = 'B';
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 81 && nilai_akhir <= 85) {
        kategori = 'B';
        printf("Anda lulus dengan baik, tingkatkan terus belajarnya!\n");
    } else if (nilai_akhir >= 86 && nilai_akhir <= 90) {
        kategori = 'A';
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else if (nilai_akhir >= 91 && nilai_akhir <= 100) {
        kategori = 'A';
        printf("Selamat! Anda lulus dengan nilai yang sangat memuaskan!\n");
    } else {
        printf("Nilai tidak valid. Masukkan nilai antara 0 hingga 100.\n");
        return 1; // Keluar dari program dengan kode kesalahan
    }
    
    printf("Nilai Akhir: %.2f\n", nilai_akhir);
    printf("Kategori: %c\n", kategori);
    
    return 0;
}
