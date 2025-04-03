#include <stdio.h>

int main() {
    int marks;

    printf("Enter the marks: ");
    scanf("%d", &marks);

    (marks > 75) ? printf("First class") :
    (marks > 65) ? printf("Second class") :
    (marks > 55) ? printf("Third class") :
    printf("Fourth class");

    return 0;
}