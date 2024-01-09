//프로그램 사용자로부터 두 개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성해보자.
//단, 사용자는 두 개의 숫자를 입력 할 때에 입력 순서에 자유로워야 한다.

#include <stdio.h>

void Gugu(int, int);

int main(void)
{
    int num1, num2;
    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d", &num1, &num2);

    Gugu(num1, num2);
    return 0;
}

void Gugu(int num1, int num2)
{
    int big, small;
    if (num1>num2)
    {
        big = num1;
        small = num2;
    }
    else 
    {
        big = num2;
        small = num1;
    }

    while (small <= big)
    {
        for (int i=0; i<9; i++)
        {
            printf("%d * %d = %d \n", small, i+1, small*(i+1));
        }
        small++;
        printf("\n");
    }
}