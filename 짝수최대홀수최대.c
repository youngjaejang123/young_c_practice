#include <stdio.h>
//입력한 숫자에서 홀수 최대값과 짝수 최대값을 구해보자
void OM(int number,int input[])
{
    int maxodd=0, i;
    for(i=0; i<number; i++)
    {
        if(input[i] > 0 && input[i] % 2 == 1)
        {
            maxodd = input[i];
        }
        

    }
    printf("입력하신 숫자중에서 가장 큰 홀수는 %d입니다.\n", maxodd);

}

void EM(int number, int input[])
{
    int i, maxeven=0;
    for(i=0; i<number; i++)
    {
        if(input[i] > maxeven && input[i] % 2 == 0)
        {
            maxeven = input[i];
        }
    }
    printf("입력하신 숫자중에서 가장 큰 짝수는 %d입니다.\n", maxeven);

}

int main(void)
{
    int number, input[number], i;
    printf("입력하실 숫자의 총 개수를 적어주세요\n");
    scanf("%d", &number);

    for(i=0; i<number; i++)
    {
        printf("숫자를 입력해주세요\n[%d번째 숫자]", i+1);
        scanf("%d", &input[i]);
    }

    OM(sizeof(number) / sizeof(int), input);
    EM(sizeof(number) / sizeof(int), input);
    
    return 0;
}
