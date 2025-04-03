#include<stdio.h>
int main(){
    float radi,area,cir;
    printf("Enter the value of radi:");
    scanf("%f",&radi);

    area=4.00*3.14*radi*radi;
    cir=2*3.14*radi;

    printf("The value of area is:%.2f\n",area);
    printf("The value of circumstance is :%.2f\n",cir);

    return 0;

}