#include<stdio.h>
int main(){
    char ch;
    int number;

    printf("Enter any character:");
    scanf("%c",&ch);

    printf("Given character is:%c",ch);

    printf("\n\nEnter an integer:");
    scanf("%d",&number);

    printf("Entered integer is:%d\n",number);

    return 0;
}