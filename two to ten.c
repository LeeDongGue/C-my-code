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
        printf("��ȯ�ϰ��� �ϴ� 2������ �Է��Ͻÿ� : \n");
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
        printf("2���� %d�� 10�������� ��ȯ�ϸ� %d �Դϴ�.\n", num, sum);
        printf("����Ͻðڽ��ϱ�? (Y/N) : ");
        scanf(" %c", &c);
        if (c == 'N')
            break;
    }
    return 0;
}