12-01 (a)：逆序（Reversal） 编写程序读一条消息，然后逆序打印出这条消息。

输出范例：


Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD


Enter a message: Hello, world!
Reversal is: !dlrow ,olleH


提示：?次读取消息中的?个字符（?getchar函数），并且把这些字符存储在数组中，当数组写满或者读到字符 '\n' 时停?读?。
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int len, x, y = 0;
    scanf("%[^\n]", &a);
    len = strlen(a);
    for (x = len; len >= 0; x--) {
        printf("%c", a[x]);
    }
    return 0;
}
