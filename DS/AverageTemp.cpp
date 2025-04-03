#include <stdio.h>

int main() {
   
    int temperatures[4][7] = {
        {32, 33, 31, 35, 33, 30, 31}, 
        {34, 34, 32, 34, 33, 33, 32},  
        {33, 34, 31, 31, 31, 30, 31}, 
        {35, 35, 33, 33, 34, 33, 36}   
    };
    
    const char *days[7] = {
        "Monday", "Tuesday", "Wednesday",
        "Thursday", "Friday", "Saturday", "Sunday"
    };
    
    int highestTemp = temperatures[0][0];
    int highestWeek = 0; 
    int highestDay  = 0; 
    
    for (int week = 0; week < 4; week++) {
        for (int day = 0; day < 7; day++) {
            if (temperatures[week][day] > highestTemp) {
                highestTemp = temperatures[week][day];
                highestWeek = week;
                highestDay  = day;
            }
        }
    }
    
    printf("Highest temperature is %d.\n", highestTemp);
    printf("It was recorded in Week %d on %s.\n", highestWeek + 1, days[highestDay]);
    
    return 0;
}