#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void ten_to_two(int);

int main()
{
    while (1)
    {
        int num = 0, sBase = 0, tBase = 0;
        char c;
        printf("변환될 수와 진법 그리고 변환할 진법을 입력하시오 : ");
        scanf("%d %d %d", &num, &sBase, &tBase);

        if (sBase == 2 && tBase == 10)
        {
            int cnt = 0;
            int rmd = 0;
            int sum = 0;
            int copy = num;
            while (copy != 0)
            {
                int temp = 1;
                rmd = copy % 10;
                copy = copy / 10;
                if (cnt == 0 && rmd == 1)
                    sum = sum + 1;
                else if (rmd == 1)
                {
                    for (int i = 0; i < cnt; i++)
                        temp = temp * 2;
                    sum = sum + temp;
                }
                cnt++;
            }
            printf("2진수 %d를 10진법으로 변환하면 %d 입니다.\n", num, sum);
        }
        else if (sBase == 10 && tBase == 2)
        {
            printf("10진수 %d를 2진법으로 변환하면 ", num);
            ten_to_two(num);
            printf(" 입니다.\n");
        }
        printf("계속하시겠습니까? (Y/N) : ");
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