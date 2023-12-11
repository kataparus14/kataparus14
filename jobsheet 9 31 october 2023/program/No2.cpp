//created by fhandy nofalino akhsan 23343065

#include <stdio.h>
#include <string.h>

void reverseSentence(char sentence[]) {
    // Menghitung panjang kalimat
    int length = strlen(sentence);

    // Menukar posisi karakter dalam kalimat
    for (int i = 0; i < length / 2; i++) {
        char temp = sentence[i];
        sentence[i] = sentence[length - i - 1];
        sentence[length - i - 1] = temp;
    }
}

int main() {
    char sentence[100];

    printf("Masukkan kalimat: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Menghapus newline character di akhir kalimat
    if (sentence[strlen(sentence) - 1] == '\n') {
        sentence[strlen(sentence) - 1] = '\0';
    }

    // Memanggil fungsi untuk membalikkan kalimat
    reverseSentence(sentence);

    printf("Kalimat terbalik: %s\n", sentence);

    return 0;
}