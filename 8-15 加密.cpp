8-15�����ܣ�Encryption�� ��֪�����?��?�ּ��ܼ����ǿ������ܣ������� Julius caesar������?����?����Ϣ�е�ÿ����??��?���й̶�����֮����Ǹ���?������������Խ������?Z�����ƻص���?�����ʼλ�á����磬���ÿ����?��?��?��������λ��֮�����?���棬��ôY�ͱ��滻ΪA��Z�ͱ��滻ΪB����

��д����?��������?������Ϣ��?���ܡ�?����?�����ܵ���Ϣ����λ��������?�ƶ���λ����?����
Enter message to be encrypted: Go ahead, make my day.
Enter shift amount (1-25): 3
Encrypted message: Jr dkhdg, pdnh pb gdb.


ע��,��?����?26����λ�����Ĳ�ֵʱ,������Զ���Ϣ��?����:


Enter message to be encrypted: Jr dkhdg, pdnh pb gdb.
Enter shift amount (1-25): 23
Encrypted message: Go ahead, make my day


������?����Щ�ַ���Ҫ�Ķ������⣬����ʱ��Ҫ�ı���?��??д��


���������


Enter message to be encrypted: Hello, world!
Enter shift amount (1-25): 3
Encrypted message: Khoor, zruog!


Enter message to be encrypted: Khoor, zruog!
Enter shift amount (1-25): 23
Encrypted message: Hello, world!
#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int len, x, y;
    scanf("%[^\n]", &a);
    scanf("%d", &y);
    len = strlen(a);
    for (x = 0; x < len; x++) {
        if (a[x] >= 'A' && a[x] <= 'Z') {
            a[x] += y;
            if (a[x] > 'Z') {
                a[x] -= 26;
            }
        } else if (a[x] >= 'a' && a[x] <= 'z') {
            if (a[x] >= 'z' - y) {
                a[x] -= 26;
            }
            a[x] += y;
        }
        printf("%c", a[x]);
    }
    return 0;
}
