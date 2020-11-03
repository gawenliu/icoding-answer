6-6：偶数平?（Square of Even Number） 编写程序，提示?户输??个数 n，然后显示出 1~n 的所有偶数的平?值。

输出范例：
Enter a number: 100
4
16
36
64
100

Enter a number: 50
4
16
36

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b = 2;
    int c = 2;
    printf("Enter a number:");
    scanf("%d", &a);
    while (a >= c) {
        c = b;
        c *= b;
        printf("%d\n", c);
        b = b + 2;
    }
    return 0;
}
