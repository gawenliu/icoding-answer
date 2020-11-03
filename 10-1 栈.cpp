10-1：栈（Stack） 修改如下程序（10.2节的栈示例）使它存储字符而不是整数。 增加 main 函数，用来要求用户输入一串圆括号或花括号，然后指出它们之间的嵌套是否正确。

输出范例：


Enter parentheses and/or braces: ()({})({})
Parentheses/braces are nested properly


Enter parentheses and/or braces: ((}
Parentheses/braces are NOT nested properly
#include <stdbool.h>
#include <stdio.h>
#define STACK_size 10
char contents[STACK_size];
int top = 0;
void make_empty(void)
{
    top = 0;
}
bool is_empty(void)
{
    return top == 0;
}
bool is_full(void)
{
    return is_full == 0;
}
void push(char i)
{
    if (is_full())

        ;
    else
        contents[top++] = i;
}
char pop(void)
{
    if (is_empty())
        ;
    else
        return contents[--top];
}
int main()
{
    printf("enter your braces");
    char a;
    push(getchar());
    while ((a = getchar()) != '\n') {

        if (a == '}') {
            if (pop() != '{') {
                printf("Parentheses/braces are NOT nested properly");
                break;
            }
        } else if (a == ')') {
            if (pop() != '(') {
                printf("Parentheses/braces are NOT nested properly");
                break;
            }
        } else
            push(a);
    }
    if (top == 0)
        printf("Parentheses/braces are nested properly");
}
