#include<stdio.h>
struct time
{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    struct time t1,t2;
    printf("Enter time t1: ");
    scanf("%d %d %d",&t1.hours,&t1.minutes,&t1.seconds);

    printf("Enter time t2: ");
    scanf("%d %d %d",&t2.hours,&t2.minutes,&t2.seconds);

    if(t1.seconds>t2.seconds)
    {
        t2.seconds = t2.seconds + 60;
        t2.minutes = t2.minutes;
    }
    if(t1.minutes>t2.minutes)
    {
        t2.minutes = t2.minutes + 60;
        t2.hours = t2.hours;
    }
    struct time diff;
    diff.hours = t2.hours - t1.hours;
    diff.minutes = t2.minutes - t1.minutes;
    diff.seconds = t2.seconds - t1.seconds;
    printf("%d : %d : %d",diff.hours,diff.minutes,diff.seconds);
    return 0;
}