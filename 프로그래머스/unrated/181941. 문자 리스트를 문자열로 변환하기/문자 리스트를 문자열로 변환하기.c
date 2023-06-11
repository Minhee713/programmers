#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// arr_len은 배열 arr의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* arr[], size_t arr_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int totalLen = 0; 
    int i = 0; 
    while(i < arr_len)
    {
        totalLen += strlen(arr[i]);
        i++;
    }
    
    char* answer = (char*)malloc(sizeof(char) * (totalLen + 1));
    answer[0] = '\0';
    
    i = 0;
    while(i < arr_len)
    {
        strcat(answer, arr[i]);
        i++;
    }
    
    return answer;
}