#include <stdio.h>

//else与最接近的if进行匹配

int main()
{
    int age = 20;
    if (age < 18)
    {
        printf("未成年");
    }
    else if (age < 45)
    {
        printf("青壮年");
    }
    else if (age <65 )
    {
        printf("中年");
    }
    else
    {
        printf("老年");
    }

    return 0;
}