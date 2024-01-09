//프로그램 사용자로부터 초(second)를 입력 받은 후에, 이를 [시, 분, 초]의 형태로 출력하는 프로그램을 작성해보자.
#include <stdio.h>

int main(void)
{
    int sec;
    printf("초(second) 입력: ");
    scanf("%d", &sec);

    int hour, min;

    hour = sec/3600;
    sec = sec - 3600*hour;

    min = sec/60;
    sec = sec - 60*min;

    printf("[h: %d, m: %d, s: %d] \n", hour, min, sec);
    return 0;
}