6-6��ż��ƽ?��Square of Even Number�� ��д������ʾ?����??���� n��Ȼ����ʾ�� 1~n ������ż����ƽ?ֵ��

���������
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
