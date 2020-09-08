#include <stdio.h>
//4년에 한번정도는 2월을 29일로 하는 연도를 윤년이라함
//윤년 -> 4년마다, 그렇지만 100년 단위일 때는 윤년 아님
//윤년 -> 400년 단위일 때는 어떤 상황이든간에 윤년
int main(void)
{
    int year;
    printf("년도를 입력하세요.\n");
    scanf("%d", &year);

    if((year % 4 == 0) && ((year % 100) != 0))
    {
        printf("해당 년도는 윤년입니다.\n");
    }
    else if(year % 400 == 0)
    {
        printf("해당 년도는 윤년입니다.\n");
    }
    else
    {
        printf("해당 년도는 윤년이 아닙니다.\n");
    }

    return 0;
}

