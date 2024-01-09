#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int cnt = 2*n-1;
    int mid = cnt/2;

    for(int i=1; i<=n; i++)
    {
        int b=1;
        while(b<=mid)
        {
            printf(" ");
            b++;
        }

        int s=1;
        while (s<=2*i-1)
        {
            printf("*");
            s++;
        }
        printf("\n");
        mid--;
    }
    
    mid = mid+2;
    for(int i=n-1; i>0; i--)
    {
        int b=1;
        while(b<=mid)
        {
            printf(" ");
            b++;
        }

        int s=1;
        while (s<=2*i-1)
        {
            printf("*");
            s++;
        }

        printf("\n");
        mid++;

    }
    return 0;

}