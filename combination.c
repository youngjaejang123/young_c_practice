#include <stdio.h>
//조합 : nCr은 r이 0이거나 n이라면 1이며,
// nCr(n-1, r-1) + nCr(n-1, r)과 같다.
int n, r;

int nCr(int n, int r)
{
    if(n == 0 || r == n)
    {
        return 1;
    }
    else
    {
       return nCr(n-1, r-1) + nCr(n-1, r);
    }

}

int main(void)
{
    printf("계산하고 싶은 nCr, 즉 n과 r을 입력하세요.\n");
    scanf("%d %d", &n, &r);
    printf("입력하신 %dC%d의 값은 %d입니다.\n", n, r, nCr(n, r));
    

    return 0;
}
