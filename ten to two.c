#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void ten_to_two(int);

int main()
{
    while (1)
    {
        int num = 0;
        char c;
        printf("변환하고자 하는 10진수를 입력하시오 : \n");
        scanf("%d", &num);
        printf("10진수 %d를 2진법으로 변환하면 ", num);
        ten_to_two(num);
        printf(" 입니다\n계속하시겠습니까? (Y/N) : ");
        scanf(" %c", &c);
        if (c == 'N')
            break;
    }
    return 0;
}

void ten_to_two(int n)
{
    int rmd = n % 2;
    if (n != 1)
        ten_to_two(n / 2);
    printf("%d", rmd);
    return;
}