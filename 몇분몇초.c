#include <stdio.h>
//받은 초를 몇분 몇초로 나타내어 보기
#define second_per_minute 60
int main(void)
{
    int input;
    int minute = input / second_per_minute;
    int second = input % second_per_minute;
    printf("초를 입력하세요\n");
    scanf("%d", &input);
    printf("%d초는 %d분 %d초입니다.\n", input, minute, second);

        

    return 0;
}
