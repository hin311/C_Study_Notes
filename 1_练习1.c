#include <stdio.h>

// 判断一个数字是否为奇数

int main()
{
    int num = 0;
    printf("请输入一个数字\n");
    // input
    scanf("%d", &num);
    // judge&output
    if (num % 2 == 1)
    {
        printf("%d为奇数\n", num);
    }
    else
    {
        printf("%d为偶数\n", num);
    }

    return 0;
}