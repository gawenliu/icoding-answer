2-7�������˵���BILLS�� ��д?������Ҫ��?�����?����Ԫ������Ȼ����ʾ�����?����20��Ԫ��10��Ԫ��5��Ԫ��1��Ԫ�����
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
