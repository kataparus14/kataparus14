//creted by fhandy nofalino akhsan 23343065


#include <stdio.h>

void printPattern(char *str) {
    char *ptr = str;

    while (*ptr != '\0') {
        printf("%s\n", ptr);
        ptr++;
    }
}

int main() {
    char str[] = "BORLAND";
    printPattern(str);

    return 0;
}
