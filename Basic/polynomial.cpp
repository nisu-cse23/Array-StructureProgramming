#include<stdio.h>
#include<math.h>
int main(){
    float x,y,p;

    printf("The value of x:");
    scanf("%f",&x);

    p=(x-1)/x;
    y=p+pow(p,2)/2+pow(p,3)/3+pow(p,4)/4;

    printf("The value of y is :%.2f\n",y);
    return 0;
}