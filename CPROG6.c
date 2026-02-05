#include <stdio.h>

int main() {
    int a = 100;

    {
        int b = 200;
        printf("Inside block: a = %d, b = %d\n", a, b);
    }

    printf("Outside block: a = %d\n", a);

    return 0;
}
