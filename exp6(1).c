#include <stdio.h>
int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';
    int *ptrInt = &a;
    float *ptrFloat = &b;
    char *ptrChar = &c;

    printf("Values of variables:\n");
    printf("a = %d\n", a);
    printf("b = %.2f\n", b);
    printf("c = %c\n", c);

    printf("\nAddresses stored in pointers:\n");
    printf("ptrInt  = %p\n", ptrInt);
    printf("ptrFloat = %p\n", ptrFloat);
    printf("ptrChar = %p\n", ptrChar);

    printf("\nValues accessed using pointers:\n");
    printf("*ptrInt  = %d\n", *ptrInt);
    printf("*ptrFloat = %.2f\n", *ptrFloat);
    printf("*ptrChar = %c\n", *ptrChar);

    return 0;
}
