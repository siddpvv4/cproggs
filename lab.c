#include <stdio.h>

int main() {
    int n;
    int sb1, sb2, sb3;
    int av,p;
    int i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        printf("\nEnter marks of student %d in subject 1: ", i);
        scanf("%d", &sb1);

        printf("Enter marks of student %d in subject 2: ", i);
        scanf("%d", &sb2);

        printf("Enter marks of student %d in subject 3: ", i);
        scanf("%d", &sb3);

        av = sb1 + sb2 + sb3;
        p = (av / 300.0) * 100;   

        printf("Student %d - Percentage: %d ", i, p);

        if(p >= 90)
            printf("Grade: A\n");
        else if(p >= 70)
            printf("Grade: B\n");
        else if(p >= 50)
            printf("Grade: C\n");
        else
            printf("Grade: F\n");
    }

    return 0;
}
