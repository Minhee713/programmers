#include <stdio.h>

int main(void)
{
        int year;

        do{
                scanf("%d", &year);
        } while(year < 1 || year > 4000);

        if (year % 4 == 0 && year % 100 != 0 || year % 4 == 0 && year % 400 == 0)
                        printf("1\n");
        else
                printf("0\n");

        return 0;
}