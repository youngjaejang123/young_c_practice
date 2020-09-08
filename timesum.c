#include <stdio.h>
int hour;
int minute;
int addhour;
int addminute;

int time()
{
    hour += addhour;
    minute += addminute;
    
    hour += (minute / 60);
    minute = (minute % 60);

}

int main(void)
{
    char h[10], m[10];
    printf("몇시 몇분인지 입력하세요.\n");
    scanf("%d%s %d%s", &hour, h, &minute, m);
    printf("더할 시간을 입력하세요. ex) 3시 25분\n");
    scanf("%d%s %d%s", &addhour, h, &addminute, m);
    printf("%d시 %d분에 %d시 %d분을 더하면 ", hour, minute, addhour, addminute);
    time();
    printf("%d시 %d분입니다,\n", hour, minute);


    return 0;
}
