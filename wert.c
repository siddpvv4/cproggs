#include <stdio.h> 
#include <string.h> 
struct Student { 
int roll_no; 
char name[50]; 
float marks; 
}; 
int main() { 
struct Student s1; 
printf("Enter Roll No: "); 
scanf("%d", &s1.roll_no); 
printf("Enter Name: "); 
scanf("%s", s1.name); 
printf("Enter Marks: "); 
scanf("%f", &s1.marks); 
printf("\n--- Student Details ---\n"); 
printf("Roll No: %d\n", s1.roll_no); 
printf("Name: %s\n", s1.name); 
printf("Marks: %.2f\n", s1.marks); 
return 0; 
} 