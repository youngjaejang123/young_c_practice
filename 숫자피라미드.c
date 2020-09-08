#include <stdio.h>

void pyramid(int number)
{
    int i, j;
    for(i=0; i<number; i++)
    {
        for(j=0; j<number - i; j++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            printf("%d", j+1);
        }
        for(j=1; j<=i; j++)
        {
            printf("%d", j+i+1);
        }
        printf("\n");
    }
}

int main(void)
{
    int number;    

    printf("숫자 피라미드를 몇층까지 만드시겠습니까?\n");
    scanf("%d", &number);
    pyramid(number);

    return 0;
}
