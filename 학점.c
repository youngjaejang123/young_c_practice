#include <stdio.h>

int main(void)
{
    int score;
    int grade;
    printf("학생의 점수를 입력하세요.\n");
    scanf("%d", &grade);

    if(grade >= 90)
    {
        printf("A");
    }
    else if(grade >= 80)
    {
        printf("B");
    }
     else if(grade >= 70)
    {
        printf("C");
    }
    else if(grade >= 60)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    
    return 0;

}
