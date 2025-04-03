#include<stdio.h>
#include<math.h>
int main(){
    float a,b, c,d,x1,x2,realPart,immaPart;

    printf("Enter the value of a ,b and c:");
    scanf("%f%f%f",&a,&b,&c);

    d=pow(b,2)-4*a*c;

    if(d>0){
        x1=(-b+d)/2*a;
        x2=(-b-d)/2*a;

        printf("Roots are real and different\n");
        printf("Root x1 is:%.2f\n",x1);
        printf("Root x2 is :%.2f\n",x2);
    }
    else if(d==0){
        x1=-b/2*a;
        x2=-b/2*a;

        printf("Roots are equal and real\n");
        printf("Root x1 is:%.2f\n",x1);
        printf("Root x2 is:%.2f\n",x2);

    }
    else{

        realPart=-b/2*a;
        immaPart=sqrt(-d)/2*a;

        printf("Roots are complex and different\n");
        printf("Root x1 is:%.2f + %.2fi\n",realPart,immaPart);
        printf("Root x1 is:%.2f - %.2fi\n",realPart,immaPart);

    }
  return 0;


}