#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* code) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int codeLength = strlen(code);
    int mode = 0;
    int idx = 0;
    
    char* answer = (char*)malloc(sizeof(char) * (codeLength + 1));
    answer[0] = '\0'; 
    
    while (idx < codeLength)
    {
        if (mode == 0)
        {
            if (code[idx] == '1')
              mode = 1;
            else 
            {
                if (idx % 2 == 0)
                    strncat(answer, &code[idx], 1);
            }
        }
        else 
        {
            if (code[idx] == '1')
                mode = 0;
            else 
            {
                if (idx % 2 != 0)
                    strncat(answer, &code[idx], 1);
            }
        }
        idx++; 
    }
    
    if (strcmp(answer, "") == 0)
        return "EMPTY"; 
    else                       
        return answer;
}