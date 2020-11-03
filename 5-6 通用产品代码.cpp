5-6：通?产品代码（UPC, Universal Production Code） 修改如下（4.1 节的upc.c）程序，使其可以检测 UPC 的有效性。在?户输?UPC后，程序将输出 VALID 或 NOT VALID 。

输出范例：


Enter the first (single) digit: 0
Enter first group of five digits: 13800
Enter second group of five digits: 15173
Enter the last (single) digit: 5
VALID


Enter the first (single) digit: 0
Enter first group of five digits: 51500
Enter second group of five digits: 24128
Enter the last (single) digit: 7
NOT VALID

#include <stdio.h>

int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, l, total;

    printf("Enter the first (single) digit:");
    scanf("%1d", &d);

    printf("Enter the first group of five digits:");
    scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

    printf("Enter the second group of five digits:");
    scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

    printf("Enter the last(single) digit:");
    scanf("%1d", &l);
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4 + l;
    total = 3 * first_sum + second_sum;
    d = 9 - ((total - 1) % 10);
    if (d == l)
        printf("VALID");
    else
        printf("NOT VALID");

    return 0;
}
