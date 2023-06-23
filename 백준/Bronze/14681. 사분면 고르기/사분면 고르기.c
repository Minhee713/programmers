#include <stdio.h>

int main(void)
{
        int num1, num2;

        do {
                scanf("%d%d", &num1, &num2);
        } while(num1==0 || num1 < -1000 || num1 > 1000 || num2==0 || num2 < -1000 || num2 > 1000);


        if (num1 > 0 && num2 > 0)
                printf("1\n");
        else if (num1 < 0 && num2 > 0)
                printf("2\n");
        else if (num1 < 0 && num2 < 0)
                printf("3\n");
        else
                printf("4\n");

        return 0;
}