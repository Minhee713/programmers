#include <stdio.h>
#include <string.h>
#define LEN_INPUT1 11
#define LEN_INPUT2 11

int main(void) {
    char s1[LEN_INPUT1];
    char s2[LEN_INPUT2];
    scanf("%s %s", s1, s2);
    
    char* result; 
    
    result = strcat(s1, s2);
    
    printf("%s\n", result); 

    return 0;
}