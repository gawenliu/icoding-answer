��Ŀ��
��д?������Ҫ��?����??����Ԫ������Ȼ����ʾ������ 5% ˰�ʺ����Ӧ?�

Enter an amount: 100.00
with tax added: $105.00

��?��?��Ϊ?�� 0 ����λ����������
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
