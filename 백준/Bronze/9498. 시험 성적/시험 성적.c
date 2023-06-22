#include <stdio.h>

int main(void)
{
        int score;

        do {
                scanf("%d", &score);
        } while(score > 0 && score > 100);

        if (score >= 90 && 100 >= score)
                printf("A\n");
        else if (score >= 80 && 89 >= score)
                printf("B\n");
        else if (score >= 70 && 79 >= score)
                printf("C\n");
        else if (score >= 60 && 69 >= score)
                printf("D\n");
        else
                printf("F\n");

        return 0;
}