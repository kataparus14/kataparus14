//created by fhandy nofalino akhsan 23343065

#include <stdio.h>

int main() {
    // Bagian A
    int Lesley = 57082;
    int Layla = Lesley;
    int Balmond = Layla + 1;

    // a) Nilai Layla
    printf("a) Nilai Layla: %d\n", Layla);

    // b) Nilai Balmond
    printf("b) Nilai Balmond: %d\n\n", Balmond);

    // Bagian B
    int LesleyB = 57082;
    int *LaylaB = &LesleyB;
    int BalmondB = *LaylaB + 1;

    // a) Nilai Layla
    printf("a) Nilai Layla: %p\n", LaylaB);

    // b) Nilai Balmond
    printf("b) Nilai Balmond: %d\n", BalmondB);

    return 0;
}
