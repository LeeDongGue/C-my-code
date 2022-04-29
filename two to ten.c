#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    while (1)
    {
        int num = 0;
        int cnt = 0;
        int rmd = 0;
        int sum = 0;
        char c;
        printf("변환하고자 하는 2진수를 입력하시오 : \n");
        scanf("%d", &num);
        while (num != 0)
        {
            int temp = 1;
            rmd = num % 10;
            num = num / 10;
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
        printf("계속하시겠습니까? (Y/N) : ");
        scanf(" %c", &c);
        if (c == 'N')
            break;
    }
    return 0;
}