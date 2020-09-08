#include <stdio.h>

int main(void)
{
    char g, a;
    int x, y;
       while(1)
    {
      printf("본 프로그램은 덧셈, 뺄셈, 나눗셈, 곱셈, 나머지연산만 지원합니다.\n");
      printf("수식을 입력하세요 ex)5 + 3 or 5 / 2...\n");
      scanf("%d %c %d", &x, &g, &y);

      if(g == '+')
         {
            printf("%d + %d는 %d입니다.\n", x, y, x+y);
         }
      else if(g == '-')
         {
            printf("%d - %d는 %d입니다.\n", x, y, x-y);

         }
      else if(g == '*')
         {
            printf("%d + %d는 %d입니다.\n", x, y, x*y);
    
       }
     else if(g == '/')
         {
            printf("%d / %d는 %d입니다.\n", x, y, x/y);

         }
     else if(g == '%')
         {
            printf("%d % %d는 %d입니다.\n", x, y, x%y);

         }
      else
         {
            printf("본 계산기에 맞지 않는 계산법 입니다.\n");
         
         }
        getchar(); 
        printf("다시 시도하시겠습니까?(y/n)\n");
        scanf("%c", &a);
        if(a == 'y')
        {
            continue;
        }
        else if(a == 'n')
        {
            break;
        }
        else
        {
            printf("입력이 잘못되었습니다.\n");
        }
        
    }

    return 0;
}
