#include<stdio.h>
int main(){
    int num;
    
    printf("Enter an integer:");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("number is even",num);
    }
    else{
        printf("Number is odd",num);
    }
    return 0;
}