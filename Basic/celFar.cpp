#include<stdio.h>
int main(){
    float cel,far;

    printf("Enter the value of farenheit scale :");
    scanf("%f",&far);

    cel=(5.00/9.00)*(far-32.0);
    printf("The value of celcius scale is :%.2f\n",cel);
    return 0;
}