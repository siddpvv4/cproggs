#include <stdio.h>

int main() {
    FILE *fp;
    char line[200];

    fp = fopen("sample.txt", "r");   // open file for reading

    if(fp == NULL) {
        printf("File not found or unable to open!\n");
        return 1;
    }

    printf("\n--- File Content ---\n");

    while(fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}
