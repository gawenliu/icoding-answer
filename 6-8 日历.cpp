
6-8��������Calendar Month�� ��д������ʾ��?��?����?��ָ�����?�������͸�?��ʼ?������?��

���������

Enter number of days in month: 31

Enter starting day of the week(1=Sun, 7=Sat): 3

��	һ	��	��	��	��	��
        1	2	3	4	5
6	7	8	9	10	11	12
13	14	15	16	17	18	19
20	21	22	23	24	25	26
27

#include <stdio.h>
int main()
{
    int day = 0;
    int count = 0;
    int printdays = 0;
    int i;
    printf("��������������ʼ�������ڼ�:\n");
    scanf("%d%d", &day, &count);
    printdays = day + count - 1;
    for (i = 1; i <= printdays; i++) {
        if (i < count)
            printf("\t");
        else {
            if ((i - 1) % 7 == 0) {
                printf("\n");
            }
            printf("%d\t", i - count + 1);
        }
    }
    printf("\n");
    return 0;
}
