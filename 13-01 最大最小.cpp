13-01�������С���ʼ��԰棨The Biggest and Smallest Words�� ��д�����ҳ�һ�鵥���С���С�����ʺ͡���󡱵��ʡ� �û����뵥�ʺ�,��������ֵ�˳�����������ǰ��������ĵ��ʡ� ���û�����4����ĸ�ĵ���ʱ,����ֹͣ���롣�������е��ʶ�������20����ĸ��

�������1��
Enter word: dog
Enter word: zebra
Enter word: rabbit
Enter word: catfish
Enter word: walrus
Enter word: cat
Enter word: fish


Smallest word: cat
Largest word zebra


�������2��


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
