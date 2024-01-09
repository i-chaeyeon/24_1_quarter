//3500원으로 500원짜리 크림빵, 700원짜리 새우깡, 400원짜리 콜라를 사려한다.
//잔돈을 하나도 남기지 않고 이 세가지 물건을 하나 이상 반드시 구매하려면 어떻게 구매를 진행해야 하겠는가?

#include <stdio.h>

int main(void)
{
    printf("현재 당신이 소유하고 있는 금액: 3500 \n");

    int cream = 1, shrimp = 1, coke = 1;
    int money = 3500;

    while (700 * shrimp <= money)
    {
        while (500 * cream <= money - 700 * shrimp)
        {
            while (400 * coke <= money - 700 * shrimp - 500 * cream)
            {
                int cost = 500 * cream + 700 * shrimp + 400 * coke; //cost 계산 위치 (update 되어야함))

                if (money == cost)
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개 \n", cream, shrimp, coke);

                coke++;
            }
            coke = 1;
            cream++;
        }
        cream = 1;
        shrimp++;
    }

    printf("어떻게 구입하시겠습니까? \n");

    return 0;
}
