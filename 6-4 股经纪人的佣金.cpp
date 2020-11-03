6-4：股经纪?的佣?（Brokerage） 在下列程序（ 5.2 节的 broker.c ）中添加循环，以便?户可以输?多笔交易并且程序可以计算每次的佣?。程序在?户输?的交易额为 0 时终?。

输出范例：

Enter value of trade: 30000
Commission：$166.00

Enter value of trade: 20000
Commission：$144.00
Enter value of trade: 0

#include <stdio.h>

int main(void)
{
    float commission = 0;
    float value = 1;
    float a = 0;
    while (value != 0) {
        printf("Enter value of trade: ");
        scanf("%f%f", &value, &a);
        if (value != 0) {
            if (value < 2500.00f)
                commission = 30.00f + .017f * value;
            else if (value < 6250.00f)
                commission = 56.00f + .0066f * value;
            else if (value < 20000.00f)
                commission = 76.00f + .0034f * value;
            else if (value < 50000.00f)
                commission = 100.00f + .0022f * value;
            else if (value < 500000.00f)
                commission = 155.00f + .0011f * value;
            else
                commission = 255.00f + .0009f * value;

            if (commission < 39.00f)
                commission = 39.00f;

            printf("Commission: $%.2f\n", commission);
        }
    }
    return 0;
}
