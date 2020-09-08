#include <stdio.h>

int main(void)
{
    int input;
    printf("절댓값화 시킬 숫자를 입력하세요.\n");
    scanf("%d", &input);

    if(input < 0)
    {
        input = -input;
        printf("입력시킨 숫자의 절댓값은 %d입니다.\n", input);
    }
    else
    {
       printf("입력시킨 숫자의 절댓값은 %d입니다.\n", input); 
    }

    return 0;
}
