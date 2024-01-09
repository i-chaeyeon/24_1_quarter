//두 개의 정수를 입력 받아서 최대 공약수를 구하는 프로그램을 작성 해보자.

#include <stdio.h>

int gcd(int, int);

int main(void)
{
    int num1, num2;
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);

    printf("두 수의 최대공약수: %d \n", gcd(num1, num2));
    return 0;
}

int gcd(int num1, int num2)
{
    int small, big;
    int cd, gcd;

    if (num1 < num2)
    {
        small = num1;
        big = num2;
    }
    else
    {
        small = num2;
        big = num1;
    }

    for (int i = 1; i <= small; i++)
    {
        if (small % i == 0)
            cd = i;
        if (big % cd == 0)
            gcd = cd;
    }
    return gcd;
}