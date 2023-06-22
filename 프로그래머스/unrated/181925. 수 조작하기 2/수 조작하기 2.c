#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// numLog_len은 배열 numLog의 길이입니다.
char* solution(int numLog[], size_t numLog_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int charLen = numLog_len - 1;
    char* answer = (char*)malloc(sizeof(char) * (charLen + 1));
    answer[0] = '\0';
    
    int i;
    int compareNum = numLog[0];
    
    for (i = 1; i < numLog_len; i++)
    {
        if (numLog[i] == (compareNum + 1))
        {
            strcat(answer, "w");
            compareNum = numLog[i];            
        }
        else if (numLog[i] == (compareNum - 1))
        {   
            strcat(answer, "s");
            compareNum = numLog[i];
        }
        else if (numLog[i] == (compareNum + 10))
        {
            strcat(answer, "d");
            compareNum = numLog[i];
        }
        else if (numLog[i] == (compareNum - 10))
        {
            strcat(answer, "a");
            compareNum = numLog[i];
        }
    }
    
        return answer;
}