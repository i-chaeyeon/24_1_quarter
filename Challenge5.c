// 10개의 소수를 출력하는 프로그램을 작성해보자.

#include <stdio.h>

int main(void)
{
    int num = 2;
    int divisor = 2;
    int i=0;

    while(i<10)
    {
        if (num == divisor)
        {
            printf("%d ", num);
            num++;
            divisor = 2;
            i++;
        }

        else if (num > divisor)
        {
            if (num % divisor != 0)
            {
                divisor++;
            }
            else
            {
                divisor = 2;
                num++;
            }
        }
    }
    printf("\n");
    return 0;
}