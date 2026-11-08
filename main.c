#include <stdio.h>

int main(void)
{
    int input;
    long sum = 0;

    scanf("%d", &input);

    if (input < 0)
    {
        printf("NG");
        return 0;
    }

    /* 1からinputまで調べる */
    for (int number = 1; number <= input; number++)
    {
        /* 3または5の倍数は加算しない */
        if (number % 3 == 0 || number % 5 == 0)
        {
            continue;
        }

        /* 条件に当てはまらない数を合計 */
        sum += number;
    }

    printf("%ld", sum);

    return 0;
}