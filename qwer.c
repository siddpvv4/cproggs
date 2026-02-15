#include <stdio.h>

int main() {
    int n, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int temp = n; // store original number for display

    while (n != 0) {
        if (n & 1)      // check if the last bit is 1
            count++;
        n = n >> 1;     // right shift bits of n
    }

    printf("Number of 1 bits (set bits) in %d = %d\n", temp, count);
    return 0;
}
