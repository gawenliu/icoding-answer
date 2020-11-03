题目：
编写?个程序，要求?户输??个美元数量，然后显示出增加 5% 税率后的相应?额。

Enter an amount: 100.00
with tax added: $105.00

输?的?额为?于 0 的两位数浮点数。
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Enter an amount:\n");
    scanf("%f", &a);
    a = a * 1.05;
    printf("with tax added:%.2f", a);
    return 0;
}
