#include <stdio.h>
//1월 1일부터 입력한 날짜까지 차이
int getdays(int month, int day)
{
    int i, sum=0;
    for(i = 1; i < month; i++)
    {
        if(month == 2)
        {
            sum += 28;
        }
        else if(month >= 8 && month % 2 == 0)
        {
            sum += 31;
        }
        else if(month >= 8 && month % 2 == 1)
        {
            sum +=30;
        }
        else if(month <= 7 && month % 2 == 0)
        {
            sum += 30;
        }
        else if(month <= 7 && month % 2 == 1)
        {
            sum += 31;
        }

    }
    sum += day-1;
    return sum;

}

int main(void)
{
    int month, day;
    char buffer[10];
    printf("날짜를 입력하세요 ex) 1월 2일\n");
    scanf("%d%s %d%s", &month, buffer, &day, buffer);
    printf("1월 1일부터 입력하신 날짜까지의 차이는 %d일입니다.\n", getdays(month, day));
    return 0;
}
