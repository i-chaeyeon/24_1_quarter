//10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을 작성해보자. 이는 서식문자의 활용에 대한 문제이다.

#include <stdio.h>

int main(void)
{
    int num;
    printf("10진수 정수를 입력하세요: ");
    scanf("%d", &num);

    printf("16진수 형태는 %x입니다. \n", num);
    return 0;
}