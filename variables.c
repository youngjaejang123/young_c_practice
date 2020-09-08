#include <stdio.h>

int main(void)
{
    int x = 50;
    float y =123456789.123456789;
    double z =123456789.123456789;

    printf("x = %d\n", x);
    printf("y = %.2f\n", y);
    printf("float형의 크기는 %d입니다.\n", sizeof(y));
    printf("z = %.2f\n", z);
    return 0;
}
