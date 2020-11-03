5-10：将百分制转换为等级制（Centesimal-grade to Letter-grade） 利?switch语句编写?个程序，把?数字表示的成绩转化为字?表示的等级。 使?下?的等级评定规则：A为90~100，B为80~89，C为70~79，D为0~69，F为0~59。如果成绩?于100或低于0显示出错信息。

输出范例：
Enter numerical grade: 84
Letter grade: B

Enter numerical grade: -1
Error, grade must be between 0 and 100.

提示：把成绩拆分成 2 个数字，然后使? switch 语句判定?位上的数字。


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
