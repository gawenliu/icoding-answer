6-2����?��Լ����GCD, Greatest Common Divisor�� ��д����Ҫ��?����?����������Ȼ�������������������?��Լ����GCD, Greatest Common Divisor����

���������


Enter two integers: 12 28
Greatest common divisor: 4


Enter two integers��1 9
Greatest common divisor��1


��ʾ������?��Լ���ľ����㷨 Euclid �㷨���£�
�ֱ��ñ��� m �� n �洢������������� n Ϊ 0����ôͣ?������m �е�ֵ�� GCD ��������� m ���� n ���������� n ���浽 m �У������������浽 n �У��ظ�����������ÿ�ζ����ж�n�Ƿ�Ϊ 0 ��

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    printf("Enter two integers: ");
    scanf("%d%d", &a, &b);
    if (a > b) {
        c = b;
        b = a;
        a = c;
    } else {
        c = a;
    }
    c += c;
    while (d != 0) {
        c--;
        d = a % c + b % c;
    }
    printf("%d", &c);
    return 0;
}
