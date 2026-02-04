#include <stdio.h>

int main() {
    int limit, a, b, c, d;

    printf("Enter limit (max value for cube roots): ");
    scanf("%d", &limit);

    printf("Ramanujan Numbers up to limit %d:\n", limit);

    for (a = 1; a <= limit; a++) {
        for (b = a; b <= limit; b++) {
            for (c = 1; c <= limit; c++) {
                for (d = c; d <= limit; d++) {
                    if ((a*a*a + b*b*b) == (c*c*c + d*d*d) && 
                        (a != c && a != d)) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               a*a*a + b*b*b, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}
