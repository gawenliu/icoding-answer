题目：
Enter amout of loan: 20000.00
Enter interest rate: 6.0
Enter monthly payment: 386.66

Balance remaining after first payment: $19713.34
Balance remaining after second payment: $19425.25
Balance remaining after third payment: $19135.71

提示：每个月的贷款余额减去还款金额后，还需要加上贷款余额与月利率的乘积。月利率的计算方法是把用户输入的利率转换成百分数再除以12。
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    printf("Enter amout of loan:");
    scanf("%f/n", &a);
    printf("Enter interest rate:");
    scanf("%f/n", &b);
    printf("Enter monthly payment:");
    scanf("%f/n", &c);
    b = (b / 1200) + 1;
    a = (a - c) * b;
    printf("Balance remaining after first payment:%.2f/n", a);
    a = (a - c) * b;
    printf("Balance remaining after second payment:%.2f/n", a);
    a = (a - c) * b;
    printf("Balance remaining after third payment:%.2f/n", a);
    return 0;
}
