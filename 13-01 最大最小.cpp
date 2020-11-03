13-01：最大最小单词简略版（The Biggest and Smallest Words） 编写程序找出一组单词中“最小”单词和“最大”单词。 用户输入单词后,程序根据字典顺序决定排在最前面和最后面的单词。 当用户输入4个字母的单词时,程序停止读入。假设所有单词都不超过20个字母。

输出范例1：
Enter word: dog
Enter word: zebra
Enter word: rabbit
Enter word: catfish
Enter word: walrus
Enter word: cat
Enter word: fish


Smallest word: cat
Largest word zebra


输出范例2：


Enter word: computer
Enter word: ink
Enter word: light
Enter word: bookrack
Enter word: book


Smallest word: book
Largest word: light
#include <stdio.h>
#include <string.h>
int main()
{
    int i = -1;
    char p[20][10], smallest_word[10], largest_word[10];
    while (strlen(p[i]) != 4) {
        i++;
        printf("Enter word: ");
        scanf("%s", p[i]);
    }
    for (i = 0, strcpy(smallest_word, p[i]);; i++) {
        if (strcmp(p[i], smallest_word) < 0)
            strcpy(smallest_word, p[i]);
        if (strcmp(p[i], largest_word) > 0)
            strcpy(largest_word, p[i]);
        if (strlen(p[i]) == 4)
            break;
    }
    printf("\nSmallest word : ");
    puts(smallest_word);
    printf("Largest word : ");
    puts(largest_word);
    return 0;
}
