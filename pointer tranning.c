#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
    int cnt = 0;
    // 입력받을 단어를 저장해줄 배열을 선언합니다. (최대 20자리)
    char word[21];
    printf("단어를 입력하시오 : ");
    scanf("%s",word);

    // 포인터를 선언하고, 배열의 주소값을 저장해줍니다. 
    char *ptr = word;

    // 반복문을 통해 n을 찾아줍니다. ( 배열의 전체 사이즈 나누기 배열의 한 요소 사이즈 )
    for (int i = 0; i < sizeof(word)/sizeof(word[0]); i++)
    {   // 포인터 연산을 통해 단어 처음부터 끝까지의 각 문자를 탐색하고, 조건문을 통해 n을 발견한다면 공백으로 바꿔줍니다. 
        if (*(ptr + i) == 'n')
        {
            *(ptr + i) = ' ';
            // n을 발견한다면, cnt 변수의 값도 1 증가시켜 나중에 n의 개수를 파악할 떄 사용합니다.
            cnt++;
        }
    }

    printf("교체된 단어입니다 : %s\n",ptr);
    printf("n의 개수는 %d개입니다.\n", cnt);
    return 0;
}

