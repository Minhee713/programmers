#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * arr_len); 
    
    int i, j;
    int idx1;
    int idx2;
    int idx3;
    
    for (i = 0; i < queries_rows; i++)
    {
        idx1 = queries[i][0];
        idx2 = queries[i][1];
        idx3 = queries[i][2];
        
        for (j = idx1; j <= idx2; j++)
        {
            if (j % idx3 == 0)
                arr[j] += 1; 
        }
    }
    
    answer = arr; 
    
    return answer;
}