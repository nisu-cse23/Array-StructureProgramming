#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    
    printf("Enter three strings:\n");
    scanf("%s %s %s", str1, str2, str3); 
    
    char* shortest = (strlen(str1) < strlen(str2) && strlen(str1) < strlen(str3)) ? str1 :
                     (strlen(str2) < strlen(str1) && strlen(str2) < strlen(str3)) ? str2 :
                     (strlen(str3) < strlen(str1) && strlen(str3) < strlen(str2)) ? str3 :
                     str1; // In case of a tie, first string is chosen
    
    printf("The shortest string by length is: %s\n", shortest);
    
    return 0;
}