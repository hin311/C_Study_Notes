#include <stdio.h>

// scanf、putchar监控缓冲区 -> 外设输入(用回车\n结束输入) -> scanf、putchar读取缓冲区\n前数据 ->缓冲区剩下\n

// int main()
// {
//     int ch = 0;
//     while ((ch = getchar() != EOF))
//     {
//         putchar(ch);
//     }
//     return 0;
// }

int main()
{
    int ch = 0;
    while ((ch = getchar()) != '\n')//清除缓冲区至\n
    {
        ;
    }
    return 0;
}