5-2�� 24?ʱ��-12?ʱ��ת��(24-hour to 12-hour) ��д?������Ҫ��?����? 24 ?ʱ�Ƶ�ʱ�䣬����ת��Ϊ 12 ?ʱ�Ƶĸ�ʽ��

Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM

Enter a 24-hour time: 0:01
Equivalent 12-hour time: 12:01 AM

ע�⣬��Ҫ��12:00��ʾΪ0:00��
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour, min;
    printf("Enter a 24-hour time:");
    scanf("%d:%d", &hour, &min);
    if (hour > 11) {
        hour = hour - 12;
        if (hour == 0) {
            hour = 12;
        }
        printf("Equivalent 12-hour time:%d:%.2d PM", hour, min);
    } else {
        if (hour == 0) {
            hour = 12;
        }
        printf("Equivalent 12-hour time:%d:%.2d AM", hour, min);
    }
    return 0;
}
