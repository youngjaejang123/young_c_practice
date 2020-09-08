#include <stdio.h>

int main(void)
{
    int i, j;
    int gugu[10][10];

    for(i=0; i<9; i++)
    {
        printf("%d단\n", i+1);
        for(j=0; j<9; j++)
        {
            gugu[i][j] = (i+1) * (j+1);
            printf("%d X %d = %d\n", i+1, j+1, gugu[i][j]);
        }
    }
}
