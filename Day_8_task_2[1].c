#include <stdio.h>
#include <stdlib.h>

int SumofDigits (int number);
int main()
{
    int num ;
    printf("Enter you number \n");
    scanf("%d" , &num);
    int result = SumofDigits(num);
    printf("the result of sum the digits is = %d" , result);
    return 0;
}

int SumofDigits(int number)
{
    int result = 0 ;
    int remidener = 0;
    while(number>0)
        {
        remidener=number%10;
        result=result+remidener;
        number=number/10;
        }
    return result ;
}
