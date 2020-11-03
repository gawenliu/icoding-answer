2-7：计算账单（BILLS） 编写?个程序，要求?户输出?个美元数量，然后显示出如何?最少20美元、10美元、5美元和1美元来付款。
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f, g;
    printf("Enter a dollar amount:");
    scanf("%d", &a);
    b = a / 20;
    c = a - b * 20;
    d = c / 10;
    e = c - d * 10;
    f = e / 5;
    g = e - f * 5;
    printf("$20 bills:%d\n$10 bills:%d\n$5 bills:%d\n$1 bills:%d\n", b, d, f, g);
    return 0;
}
