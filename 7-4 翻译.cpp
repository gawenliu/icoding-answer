7-4�����루Translation�� ��д������԰���?��ʽ�ĵ绰���뷭�����ֵ��ʽ�� Enter phone number: CALLATT 2255288

���û�е绰�����,�ο���?��������?�ڼ����ϵĶ�Ӧ��ϵ����2=ABC��3=DEF��4=GHI��5=JKL��6=MNO��7=PQRS��8=TUV��9=WXYZ��ԭʼ�绰�����е�?��?�ַ����������ֻ�����ţ����ֲ��䣺

Enter phone number: 1-800-COL-LECT1-800-265-5328

���Լ����κ�?����?����?����?д��?��

���������

Enter phone number: 1-DCKS-A2D-OLED

1-3257-223-6533
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINE 100

void replace(char* str, char* ch1, char* ch2);

int main()
{
    char str[MAXLINE] = { 0 };

    printf("%s\n", "Enter phone number:");
    while (fgets(str, MAXLINE, stdin) != NULL) {  //:: 100 �������� str ������ 100

        replace(str, "A", "2");
        replace(str, "B", "2");
        replace(str, "C", "2");
        replace(str, "D", "3");
        replace(str, "E", "3");
        replace(str, "F", "3");
        replace(str, "G", "4");
        replace(str, "H", "4");
        replace(str, "I", "4");
        replace(str, "J", "5");
        replace(str, "K", "5");
        replace(str, "L", "5");
        replace(str, "M", "6");
        replace(str, "N", "6");
        replace(str, "O", "6");
        replace(str, "P", "7");
        replace(str, "Q", "7");
        replace(str, "R", "7");
        replace(str, "S", "7");
        replace(str, "T", "8");
        replace(str, "U", "8");
        replace(str, "V", "8");
        replace(str, "W", "9");
        replace(str, "X", "9");
        replace(str, "Y", "9");
        replace(str, "Z", "9");
        printf("%s", str);
    }

    return 0;
}

void replace(char* str, char* ch1, char* ch2)
{

    char ret_char[MAXLINE] = { 0 };

    int ch1_len = strlen(ch1);
    char *po = NULL, *q = str;
    while ((po = strstr(q, ch1)) != NULL) {
        strncat(ret_char, q, po - q);
        strcat(ret_char, ch2);
        q += po - q + ch1_len;
    }
    strcat(ret_char, q);
    strcpy(str, ret_char);
}
