#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
   
    int answer = 0;
    int oddNumSum = 0;
    int evenNumSum = 0;
    
    for (int i = 0; i < num_list_len; i++)
    {
        if (num_list[i] % 2 == 0)
            evenNumSum = (evenNumSum * 10) + num_list[i];
        else
            oddNumSum = (oddNumSum * 10) + num_list[i];
    }
    
    answer = evenNumSum + oddNumSum;
    
    return answer;
}