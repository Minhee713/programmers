#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
// queries_rows는 2차원 배열 queries의 행 길이, queries_cols는 2차원 배열 queries의 열 길이입니다.
int* solution(int arr[], size_t arr_len, int** queries, size_t queries_rows, size_t queries_cols) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    int i;
    int temp;
    int index1;
    int index2;
    
    for (i = 0; i < queries_rows; i++)
    {
        index1 = queries[i][0];
        index2 = queries[i][1];
        
        temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
                
    }
    
    answer = arr;
    
    return answer;
}