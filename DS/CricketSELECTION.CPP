#include <stdio.h>

int main() {
    int age;
    float batting_avg, bowling_avg, height, catching_reliability;

    printf("Enter Age: ");
    scanf("%d", &age);

    printf("Enter Batting Average: ");
    scanf("%f", &batting_avg);

    printf("Enter Bowling Average: ");
    scanf("%f", &bowling_avg);

    printf("Enter Height (in feet): ");
    scanf("%f", &height);

    printf("Enter Catching Reliability (in %%): ");
    scanf("%f", &catching_reliability);

    int isQualified = 0;

    if ((age >= 25 && age <= 40 && batting_avg >= 40 && catching_reliability >= 70) || (batting_avg >= 50)) {
        printf("Qualified as Batsman\n");
        isQualified = 1;
    }

    if ((age >= 20 && age <= 35 && height >= 5.75 && bowling_avg <= 30) || (bowling_avg <= 25)) {
        printf("Qualified as Bowler\n");
        isQualified = 1;
    }

    if (age >= 25 && age <= 35 && batting_avg >= 20 && catching_reliability >= 80) {
        printf("Qualified as Wicketkeeper\n");
        isQualified = 1;
    }

    if (!isQualified) {
        printf("Does not qualify for any position.\n");
    }

    return 0;
}