#include <stdio.h>

int main() {
    int i, j;
    float ratings[5][3];  
    float sum3rd = 0.0, avg3rd;
    float sumEachStudent, avgEachStudent;
    float totalSum = 0.0, overallAverage;
    
   
    printf("Enter the TER (out of 10) for each of the 5 students (3 subjects each):\n\n");
    
    for(i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        for(j = 0; j < 3; j++) {
            printf("  Rating for subject %d: ", j + 1);
            scanf("%f", &ratings[i][j]);
        }
        printf("\n");
    }

   
    for(j = 0; j < 3; j++) {
        sum3rd += ratings[2][j];
    }
    avg3rd = sum3rd / 3.0;

    printf("a) Average rating of the 3rd student: %.2f\n", avg3rd);
    printf("\nb) Average rating of each student:\n");
    for(i = 0; i < 5; i++) {
        sumEachStudent = 0.0;
        for(j = 0; j < 3; j++) {
            sumEachStudent += ratings[i][j];
        }
        avgEachStudent = sumEachStudent / 3.0;
        printf("   Student %d: %.2f\n", i + 1, avgEachStudent);
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 3; j++) {
            totalSum += ratings[i][j];
        }
    }
    overallAverage = totalSum / (5.0 * 3.0);

    printf("\nc) The average rating of all students (all subjects): %.2f\n", overallAverage);

    return 0;
}