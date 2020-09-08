#include <stdio.h>

int main(void)
{
    int number, input, sum=0, i;
    printf("몇개의 정수를 더하시겠습니까?\n");
    scanf("%d", &number);
    
    for(i = 0; i < number; i++)
       {
           printf("%d번째 정수의 값을 쳐주세요\n", i+1);
           scanf("%d", &input);
           sum += input;
       }
    printf("정수의 합은 %d입니다.\n", sum);




    return 0;
}
