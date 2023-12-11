//crreated by fhandy nofalino akhsan 23343065

#include <stdio.h>

int multiply(int a, int b) {
    if (b == 1) {
        return a;
    } else {
        return a + multiply(a, b - 1);
    }
}

int main() {
    int num1 = 12, num2 = 6;
    printf("%d x %d = %d\n", num1, num2, multiply(num1, num2));

    return 0;
}
