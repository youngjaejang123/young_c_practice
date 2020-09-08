#include <stdio.h>

int main(void)
{
    int x =50, y= 30;
    printf("x가 y와 같은가?%d\n", x == y);
    //c언어에서는 0이 아닌 모든값을 참값이라고 인식
    printf("x가 y와 같은가?%d\n", x != y);
    printf("x가 y와 같은가?%d\n", x > y);
    printf("x가 y와 같은가?%d\n", x < y);
    printf("x가 y와 같은가?%d\n", x = y);
   
    return 0;
}
