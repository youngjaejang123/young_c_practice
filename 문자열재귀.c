#include <stdio.h>

void re(int number)
{
    if(number == 0)
    {
        return;
    }
    else
    {
        printf("문자열을 출력합니다\n");
        number -= 1;
        re(number);
    }
}
int main(void)
{
    int number;

    printf("문자열을 몇번 출력하시겠습니까?");
    scanf("%d", &number);
    re(number);

    return 0;
}
