#include <stdio.h>

int main(void)
{
        int a, b, c;
        int max;

        do {
                scanf("%d%d%d", &a, &b, &c);
        } while(a < 1 || a > 6 || b < 1 || b > 6 || c < 1 || c > 6);

        if (a == b && b == c && c == a)
                printf("%d\n", 10000 + a * 1000);

        else if (a != b && b != c && c != a)
        {
                max = a;
                if (b > max)
                        max = b;
                if (c > max)
                        max = c;
                printf("%d\n", max * 100);
        }
        else
        {

                if (a == b)
                        printf("%d\n", 1000 + a * 100);
                else if (b == c)
                        printf("%d\n", 1000 + b * 100);
                else
                        printf("%d\n", 1000 + c * 100);
        }

        return 0;
}