#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int b) {
    int answer = 0;
    int temp1[10];
    int temp2[10];
    int temp3[10];
    int result1;
    int result2;
    
    sprintf(temp1, "%d", a);
    sprintf(temp2, "%d", b);
    sprintf(temp3, "%d", 2*a*b);
    strcat(temp1, temp2);
    result1 = atoi(temp1);
    result2 = atoi(temp3);
    
    if (result1 >= result2)
        answer = result1;
    else
        answer = result2;
    
    return answer;
}