8-2：出现次数（Number Occurrences） 修改如下程序(8.1 节的 repdigit.c)，使其打印?份列表，显示出每个数字在数中出现的次数。

输出范例：

Enter a number: 41271092

Digit:	0	1	2	3	4	5	6	7	8	9
Occurrences:	1	2	2	0	1	0	0	1	0	1

#include <stdio.h>
#include <string.h>
int main()
{
    int time;
    char zifu[100];
    int x = 0;
    scanf("%[^\n]", &zifu);
    x = strlen(zifu);
    for (int i = 0; i < 10; i++) {
        time = 0;
        for (int l = 0; l < x; l++) {
            if (zifu[l] == i + 48)
                time++;
        }
        printf("%d ", time);
    }
    return 0;
}
