#include<stdio.h>
int main(){
    float inch,cm;

    printf("Enter the value of in inch scale :");
    scanf("%f", &inch);

    cm=inch*2.54;
    printf("The value of cm scale is:%.2f\n",cm);
    return 0;

}