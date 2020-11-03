ÌâÄ¿£º
Enter a date (mm/dd/yyyy): 2/17/2011
You entered the date 20110217
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    printf("Enter a date(mm/dd/yyyy):");
    scanf("%d/%d/%d", &a, &b, &c);
    printf("You entered the date %d%.2d%.2d", c, a, b);
    return 0;
}
