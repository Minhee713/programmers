#include <stdio.h>

int main(void)
{
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    
    if (a < 2 && a > 10000 || b < 2 && b > 10000 || c < 2 && b > 10000)
        return -1;
    
    printf("%d\n", (a+b)%c);
    printf("%d\n", (((a%c)+(b%c))%c));
    printf("%d\n", (a*b)%c);
    printf("%d\n", ((a%c)*(b%c))%c);
    
    return 0;
       
           
}