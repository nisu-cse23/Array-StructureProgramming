#include<stdio.h>
#include<math.h>
int main(){

    float a,b,c;

    printf("Enter the value a and b:");
    scanf("%f%f",&a,&b);

    c=sqrt(pow(a,2)+pow(b,2));
    printf("The value of c is:%.2f\n",c);
    return 0;
}