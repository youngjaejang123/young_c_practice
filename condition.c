#include <stdio.h>

int main(void)
{
    int x = -50, y = -30;
    int absoluteX = (x > 0) ? x : -x;
    int max = (x > y) ? x : y;
    int min = (x < y) ? x : y;
    printf("절대값 x는 %d이고, x와 y중에서 큰거는 %d 작은건 %d이다.\n", absoluteX, max, min);
        return 0;
}
