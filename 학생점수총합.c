#include <stdio.h>

int main(void)
{
    int grade[5][5];
    char subject[5][9]={"수학", "영어", "국어", "사회", "역사"};
    char name[5][9];
    int sum[5]={0,};
    int i, j;
// 학생 5명의 수학, 영어, 국어, 사회, 역사점수

    for(i=0; i<5; i++)
    {
        printf("%d번째 학생의 성명을 입력하세요.\n", i+1);
        scanf("%s", name[i]);
        for(j=0; j<5; j++)
        {
            printf("%s군(양)의 %s점수는?\n", name[i], subject[j]);
            scanf("%d", &grade[i][j]);
         }
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            sum[i] += grade[j][i];
        }
    }
    for(i=0; i<5; i++)
    {
        printf("학생 5명의 %s 총합 점수 = %d\n", subject[i], sum[i]);    
                        
    }
    return 0;
}
