#include<stdio.h>
int main(){
    int a,b,sub,add,div,multi;

    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);

    add=a+b;
    sub=a-b;
    div=a/b;
    multi=a*b;

    printf("Addition is :%d\n",add);
    printf("Subtraction is :%d\n",sub);
    printf("Division is :%d\n",div);
    printf("Multiplication is: %d\n",multi);

    return 0;
    
}