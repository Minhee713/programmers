#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// included_len은 배열 included의 길이입니다.
int solution(int a, int d, bool included[], size_t included_len) {
    int answer = 0;
    int i = 0;
    int temp = 0;
        
    answer = a;
    
    for (i = 0; i < included_len; i++)
    {
        if (included[i] == true)
            temp += answer;
        
        answer += d;            
    }
    
    
    return temp;
}