#include<stdio.h>
int main(){
    int LB,UB,BEG,END,MID,DATA[7]={2,5,7,9,11,13,15},ITEM=1;
    LB=0;
    UB=6;
    BEG=LB;
    END=UB;
    MID=(int)((BEG+END)/2);

    while((BEG<=END)&&(DATA[MID]!=ITEM)){
        if(ITEM<DATA[MID])
        END=MID-1;
        else
         BEG=MID+1;

         MID=(int)((BEG+END)/2);
    }
    if(DATA[MID]==ITEM)
      printf("LOC=%d",MID);
      else
      printf("ITEM is not in the list.");
}