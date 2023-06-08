#include <stdio.h>
#include <stdio.h>
#define LEN_INPUT 20

int main(void) {
    char s1[LEN_INPUT];
    scanf("%s", s1);
    
    int i = 0;
    
    while(s1[i])
    {
        if(s1[i] >= 'a' && s1[i] <= 'z')
            s1[i] -= 32;
        else if(s1[i] >= 'A' && s1[i] <= 'Z')
            s1[i] += 32;
        i++;
    }
    
    printf("%s\n", s1);

    return 0;
}
