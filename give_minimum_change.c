#include <stdio.h>

int change;
void c(int change)
{
    int number = 0;
    while(change >= 50000)
    {
        change -= 50000;
        number++;
     }
    printf("50000원 지폐 %d개\n", number);
    number = 0;
    while(change >= 10000)
     {
        change -= 10000;
        number++;
     } 
    printf("10000원 지폐 %d개\n", number);
    number =0;
    while(change >= 5000)
    {  
        change -= 5000;
        number++;
     }
    printf("5000원 지폐 %d개\n", number);
    number = 0;
    while(change >= 1000)
    {  
        change -= 1000;
        number++;
       
     }
    printf("1000원 지폐 %d개\n", number);
    number =0;
    while(change >= 500)
    {  
        change -= 500;
        number++;
    }     
        printf("500원 동전 %d개\n", number);

        number =0;
    while(change >= 100)
    {  
        change -= 100;
        number++;
       
     }
    printf("100원 동전 %d개\n", number);
    number =0;
    while(change >= 50)
    {  
        change -= 50;
        number++;
       
     }
    printf("50원 동전 %d개\n", number);
    number =0;
    while(change >= 10)
    {  
        change -= 10;
        number++;
       
     } 
    printf("10원 지폐 %d개\n", number);






}


int main(void)
{
    printf("거슬러줘야하는 금액을 입력하세요\n");
    scanf("%d", &change);
    c(change);




    return 0;
}
