#include <stdio.h>

int main(void)
{
        int h, m;

        do {
                scanf("%d%d", &h, &m);
        } while(h < 0 || h > 23 || m < 0 || m > 59);

        if (m >= 45)
                printf("%d %d\n", h, m-45);

        else
        {
                if (h == 0)
                        printf("%d %d\n", 23, m+15);

                else
                        printf("%d %d\n", h-1, m+15);
        }

        return 0;
}