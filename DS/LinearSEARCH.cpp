#include <stdio.h>

int main() {

    int DATA[11] = {8, 2, 5, 9, 1, 4, 7, 10, 3, 6},i,n=10,ITEM=3,LOC,index;
    DATA[n+1]=ITEM;
    index=0;

    while (DATA[index] != ITEM ) {
        index=index+1;
    }

    if (index ==n+1) {
        LOC = 0; 
        printf("\n Not Found");
    }
     else {
        LOC=index+1;
        printf("\n Found at %d",LOC);
    }

    return 0;
}