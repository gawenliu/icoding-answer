5-10�����ٷ���ת��Ϊ�ȼ��ƣ�Centesimal-grade to Letter-grade�� ��?switch����д?�����򣬰�?���ֱ�ʾ�ĳɼ�ת��Ϊ��?��ʾ�ĵȼ��� ʹ?��?�ĵȼ���������AΪ90~100��BΪ80~89��CΪ70~79��DΪ0~69��FΪ0~59������ɼ�?��100�����0��ʾ������Ϣ��

���������
Enter numerical grade: 84
Letter grade: B

Enter numerical grade: -1
Error, grade must be between 0 and 100.

��ʾ���ѳɼ���ֳ� 2 �����֣�Ȼ��ʹ? switch ����ж�?λ�ϵ����֡�


#include <stdio.h>
int main()
{
    int a;
    printf("Enter numerical grade:");
    scanf("%d", &a);
    if (a > 100)
        printf("Error, grade must be between 0 and 100.");
    else if (a < 0)
        printf("Error, grade must be between 0 and 100.");
    else if (a >= 90)
        printf("Letter grade:A\n");
    else if (a >= 80 && a <= 89)
        printf("Letter grade:B\n");
    else if (a >= 70 && a <= 79)
        printf("Letter grade:C\n");
    else if (a >= 60 && a <= 69)
        printf("Letter grade:D\n");
    else if (a >= 0 && a <= 59)
        printf("Letter grade:F\n");
    return 0;
}
