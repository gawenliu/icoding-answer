12-01 (a)������Reversal�� ��д�����һ����Ϣ��Ȼ�������ӡ��������Ϣ��

���������


Enter a message: Don't get mad, get even.
Reversal is: .neve teg ,dam teg t'noD


Enter a message: Hello, world!
Reversal is: !dlrow ,olleH


��ʾ��?�ζ�ȡ��Ϣ�е�?���ַ���?getchar�����������Ұ���Щ�ַ��洢�������У�������д�����߶����ַ� '\n' ʱͣ?��?��
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
