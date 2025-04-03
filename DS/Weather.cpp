#include <stdio.h>

#define NUM_COUNTRIES 4
#define NUM_MONTHS 12

int main(void) {
    char cName[NUM_COUNTRIES][50];
    int temp[NUM_COUNTRIES][NUM_MONTHS];
    
    for (int i = 0; i < NUM_COUNTRIES; i++) {
        printf("Enter name for country %d: ", i + 1);
        scanf("%49s", cName[i]);
        
        printf("Enter 12 monthly temperatures for %s:\n", cName[i]);
        for (int j = 0; j < NUM_MONTHS; j++) {
            scanf("%d", &temp[i][j]);
        }
        printf("\n");
    }
    
    printf("-----------------------------------------------\n");
    printf("Country        Highest Temperature   Lowest Temperature\n");
    printf("-----------------------------------------------\n");
    
    for (int i = 0; i < NUM_COUNTRIES; i++) {
        int highest = temp[i][0];
        int lowest  = temp[i][0];
        
        for (int j = 1; j < NUM_MONTHS; j++) {
            if (temp[i][j] > highest) {
                highest = temp[i][j];
            }
            if (temp[i][j] < lowest) {
                lowest = temp[i][j];
            }
        }
        
        printf("%-14s %-22d %-22d\n", cName[i], highest, lowest);
    }
    
    printf("-----------------------------------------------\n");
    return 0;
}