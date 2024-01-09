//2^k = n 이 성립하는 k의 최댓값을 계산해서 출력하는 프로그램을 작성해보자.
#include <stdio.h>

int mul(int);

int main(void)
{
    int n;
    int k=1;

    printf("상수 n 입력: ");
    scanf("%d", &n);

    while(mul(k) < n)
    {
        if(mul(k+1) > n)
            break;
        k++;
    }

    printf("공식을 만족하는 k의 최댓값은 %d \n", k);
    return 0;
}

int mul(int num)
{
    int po=1;

    for (int i = 0; i < num; i++)
    {
        po = 2 * po;
    }

    return po;
}