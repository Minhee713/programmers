#include <stdio.h>

int main(void)
{
    int num1, num2;

    scanf("%d%d", &num1, &num2);

    int res1 = num1 * (num2%10);
    int res2 = num1 * ((num2/10)%10);
    int res3 = num1 * (num2/100);

    printf("%d\n", res1);
    printf("%d\n", res2);
    printf("%d\n", res3);
    printf("%d\n", res1 + (res2*10) + (res3*100));

    return 0;

}