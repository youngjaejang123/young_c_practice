#include <stdio.h>
#include <limits.h>
int main(void)
{
    int a, i, maxl=0, minl=0, max=0, min=INT_MAX;
    printf("숫자의 총 개수를 입력해주세요\n");
    scanf("%d", &a);
    int number[a]; //배열 number[a]선언 
    printf("입력하신 개수만큼 숫자를 각각 적어주세요\n"); //for문 사용하여 a만큼 반복
    for(i=0; i<a; i++)
    {
        printf("%d번째 숫자\n", i+1); // 첫번째 숫자 
        scanf("%d", &number[i]); // 배열 [0~a]에 숫자 입력

        if(number[i] > max && number[i] < min)
        {
            max = number[i];
            maxl = i+1;
            min = number[i];
            minl = i+1;
        }
        else if(number[i] > max)
        {
            max = number[i];
            maxl = i+1;
        }
        else if(number[i] < min)
        {
            min = number[i];
            minl = i+1;
        }
    }
    printf("가장 큰 숫자는 %d이고 위치는 %d입니다.\n", max, maxl);
    printf("가장 작은 숫자는 %d이고 위치는 %d입니다.\n", min, minl);

    
    
    return 0;
}
