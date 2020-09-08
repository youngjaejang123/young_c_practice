#include <stdio.h>

int main(void)
{
    int i=1;
    int sum=0;
    printf("다음은 1부터 1000까지의 합입니다.\n");

    while(i <= 1000)
    {
        sum += i;
        i++;
    }
    printf("%d",sum);
    return 0;
}

