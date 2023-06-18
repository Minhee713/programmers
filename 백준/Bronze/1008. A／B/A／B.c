#include <stdio.h>

int main(void)
{
    double a, b;
    
    if ((a < 0 && a > 10) || (b < 0 && b > 10))
        return -1; 

    scanf("%lf %lf", &a, &b);
    printf("%.10lf\n", a / b);
    
    return 0;
}