#include <stdio.h>

int main(void) {
    int a;
        
    scanf("%d", &a);
    
    if(a == 0 || a > 1000) 
        return 1;
    else if(a % 2 == 0)
        printf("%d is even\n", a);
    else
        printf("%d is odd\n", a);   
    

    return 0;
}