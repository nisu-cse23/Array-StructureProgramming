#include<stdio.h>
int main(){
    float radi,vol,area;

    printf("Enter the value of radius:");
    scanf("%f",&radi);

    area=4.00*3.14*radi*radi;
    vol=(4.0/3.0)*3.14*radi*radi*radi;

    printf("The value of area is :%.2f\n",area);
    printf("The value of volume is:%.2f\n",vol);

    return 0;
}