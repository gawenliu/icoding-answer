8-2�����ִ�����Number Occurrences�� �޸����³���(8.1 �ڵ� repdigit.c)��ʹ���ӡ?���б���ʾ��ÿ�����������г��ֵĴ�����

���������

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
