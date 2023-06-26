/* 첫 번째 제출 코드   
통과는 됐으나 코드가 중복됨 */


#include <stdio.h>

int main(void)
{
        int presentHour;
        int presentMinute;
        int needHour;

        do {
                scanf("%d%d%d", &presentHour, &presentMinute, &needHour);
        } while(presentHour < 0 || presentHour > 23 || presentMinute < 0 || presentMinute > 59 || needHour < 0 || needHour > 1000);

        if (presentMinute + needHour >= 60)
        {
                printf("%d %d\n", (presentHour + (presentMinute + needHour) / 60) % 24, (presentMinute + needHour) % 60); 
        }
        else
                        printf("%d %d\n", presentHour, (presentMinute + needHour));

        return 0;
}  
