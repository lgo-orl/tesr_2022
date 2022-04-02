#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{//当月利润  奖金  利润级别   判断标志
    int i,   a = 0,    b,      c = 0;
    printf("请输入当月利润\n");
    scanf("%d", &i);
    if (i > 1000000)//大于百万直接计算
    {
        i = i - 1000000;
        a = i * 0.01 + 400000 * 0.015 + 200000 * 0.03 + 200000 * 0.05 + 100000 * 0.075 + 100000 * 0.1;
    }
    else//小于百万分级计算
    {
        if (i > 600000)
            b = 5;
        else if (i > 400000 && i <= 600000)
            b = 4;
        else if (i > 200000 && i <= 400000)
            b = 3;
        else if (i > 100000 && i <= 200000)
            b = 2;
        else
            b = 1;
        switch (b)//利用switch函数特性分级
        {         //从上到下依次计算
        case 5:
            i = i - 600000;
            a = i * 0.015;
            c = 1;
        case 4:
            if (c == 1)//判断是否为满
            {          //以下一样
                a = a + 200000 * 0.03;
                c = 1;
            }
            else
            {
                i = i - 400000;
                a = i * 0.03;
                c = 1;
            }
        case 3:
            if (c == 1)
            {
                a = a + 200000 * 0.05;
                c = 1;
            }
            else
            {
                i = i - 200000;
                a = i * 0.05;
                c = 1;
            }
        case 2:
            if (c == 1)
                a = a + 100000 * 0.075;
            else
            {
                i = i - 100000;
                a = i * 0.075;
                c = 1;
            }
        case 1:
            if (c == 1)
                a = a + 100000 * 0.1;
            else
                a = i * 0.1;
        }
    }
    printf("%d", a);//输出结果
    return 0;
}
