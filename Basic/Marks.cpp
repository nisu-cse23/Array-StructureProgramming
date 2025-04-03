#include<stdio.h>
int main(){
    float x,y,z,total,avg;

    printf("Enter the value of marks x,y and z:");
    scanf("%f%f%f",&x,&y,&z);

    total=(x+y+z);
    avg=(total/3.00);

    printf("The value of total marks:%.2f\n",total);
    printf("The value of average marks:%.2f\n",avg);

    return 0;
}