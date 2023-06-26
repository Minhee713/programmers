#include <stdio.h>

int main(void)
{
        int presentHour;
        int presentMinute;
        int needHour;
        int ovenHour;
        int ovenMinute;

        do {
                scanf("%d%d%d", &presentHour, &presentMinute, &needHour);
        } while(presentHour < 0 || presentHour > 23 || presentMinute < 0 || presentMinute > 59 || needHour < 0 || needHour > 1000);

        ovenHour = (presentHour + (presentMinute + needHour) / 60) % 24;
        ovenMinute = (presentMinute + needHour) % 60;

        printf("%d %d\n", ovenHour, ovenMinute);



        return 0;
}