5-2： 24?时制-12?时制转换(24-hour to 12-hour) 编写?个程序，要求?户输? 24 ?时制的时间，将其转换为 12 ?时制的格式。

Enter a 24-hour time: 21:11
Equivalent 12-hour time: 9:11 PM

Enter a 24-hour time: 0:01
Equivalent 12-hour time: 12:01 AM

注意，不要把12:00显示为0:00。
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
