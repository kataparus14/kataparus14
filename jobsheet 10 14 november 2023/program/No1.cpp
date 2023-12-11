//created by fhandy nofalino akhsan 23343065

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random_number, user_guess, attempts = 0;
    char play_again;

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 1 and 20
    random_number = rand() % 20 + 1;

    // Game loop
    do {
        // Prompt the user for their guess
        printf("Tebakkan angka antara 1 dan 20: ");
        scanf("%d", &user_guess);

        // Check if the guess is correct, too high, or too low
        if (user_guess == random_number) {
            printf("Selamat, anda benar! \n");
            play_again = 'n'; // End the game loop
        } else if (user_guess > random_number) {
            printf("Nomor saya lebih kecil! \n");
            attempts++;
        } else {
            printf("Nomor saya lebih besar! \n");
            attempts++;
        }

        // Ask the user if they want to play again
        if (play_again != 'n') {
            printf("Ingin bermain lagi? (y/n): ");
            scanf(" %c", &play_again);
        }
    } while (play_again == 'y');

    // Display the number of attempts made
    printf("Jumlah percobaan yang diperlukan: %d \n", attempts);

    return 0;
}