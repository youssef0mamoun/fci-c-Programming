#include <stdio.h>
#include <stdlib.h>
int CalTime () ;
int main()
{
    int totalseconed = CalTime();
    printf("\n total seconeds is %d ", totalseconed);
    return 0;
}

int CalTime()
{
    int sec , min , hour ;
    printf("Enter hours : ");
    scanf("%d" , &hour);
    printf("Enter min : ");
    scanf("%d" , &min);
    printf("Enter seconeds : ");
    scanf("%d" , &sec);

    int totalsec = sec;
    totalsec += (min * 60);
    totalsec += (hour * 60 *60);

    return totalsec;
}
