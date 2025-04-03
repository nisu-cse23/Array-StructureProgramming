#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of sorted integers: ");
    scanf("%d", &n);
    int DATA[n];  
    int LB, UB, BEG, END, MID;
    int ITEM;
    int i;
    
    printf("Enter %d sorted integers: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &DATA[i]);
    }
    
    printf("Enter the item to search: ");
    scanf("%d", &ITEM);
    
    LB = 0;
    UB = n - 1;
    BEG = LB;
    END = UB;
    MID = (BEG + END) / 2;

    while((BEG <= END) && (DATA[MID] != ITEM)){
        if(ITEM < DATA[MID])
            END = MID - 1;
        else
            BEG = MID + 1;
        
        MID = (BEG + END) / 2;
    }
    
    if((BEG <= END) && (DATA[MID] == ITEM))
        printf("LOC=%d", MID);
    else
        printf("ITEM is not in the list.");
        
    return 0;
}