#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void ten_to_two(int);

int main()
{
    while (1)
    {
        int num = 0;
        char c;
        printf("��ȯ�ϰ��� �ϴ� 10������ �Է��Ͻÿ� : \n");
        scanf("%d", &num);
        printf("10���� %d�� 2�������� ��ȯ�ϸ� ", num);
        ten_to_two(num);
        printf(" �Դϴ�\n����Ͻðڽ��ϱ�? (Y/N) : ");
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