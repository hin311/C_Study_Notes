#include <stdio.h>

/*
    while(表达式)
    {
        执行语句；
    }
*/
// break;        永久中断循环
// continue      中断本次循环，不执行continue后的代码，直接开始下一次的循环判断

int main()
{
    int count = 0;
    while (count <= 9)
    {
        ++count;
        if (6 == count)
        {
            break;
        }
        if (4 == count)
        {
            continue; // 自增放在continue后会导致死循环，不断跳过continue后代码
        }

        printf("%d ", count);
    }
    printf("\n");
    return 0;
}