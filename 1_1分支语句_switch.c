#include <stdio.h>

//case顺序执行，遇到break中止判断

int main()
{
    int day = 0;
    scanf("%d", &day);
    switch (day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("workday\n");
        break; // 中止判断
    case 6:
    case 7:
        printf("weekend\n");
        break;
    default: // 默认选项
        printf("ERROR");
        break;
    }

    return 0;
}