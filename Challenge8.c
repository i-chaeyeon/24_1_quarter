//2의 n승을 구하는 함수를 재귀적으로 구현해보자.
#include <stdio.h>
int Recur2(int);

int main(void)
{
    int n;
    printf("정수 입력: ");
    scanf("%d", &n);

    printf("2의 %d승은 %d \n", n, Recur2(n));
    return 0;
}

int Recur2(int num)
{
    if (num==0)
        return 1;
    else
        return 2*Recur2(num-1);
}
