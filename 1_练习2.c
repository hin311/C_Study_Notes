#include <stdio.h>

// 输出了-100之间的奇数

int main()
{
    int num = 0;
    while (num < 100)
    {
        if (num % 2 == 1)
        {
            printf("%d ", num);
        }

        num++;
    }

    return 0;
}