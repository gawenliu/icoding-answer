8-9：随机步法（Random Walk） 编写程序,?成?种贯穿10×10字符数组（初始时全为字符'.'）的“随机步法”。程序必须随机地从?个元素“?到”另?个元素，每次都向上、向下、向左或向右移动?个元素位置。已访问过的元素按访问顺序?字?A到Z进?标记。

下?是?个输出示例：

A	.	.	.	.	.	.	.	.	.
B	C	D	.	.	.	.	.	.	.
.	F	E	.	.	.	.	.	.	.
H	G	.	.	.	.	.	.	.	.
I	.	.	.	.	.	.	.	.	.
J	.	.	.	.	.	.	.	Z	.
K	.	.	R	S	T	U	V	Y	.
L	M	P	Q	.	.	.	W	X	.
.	N	O	.	.	.	.	.	.	.
利?srand函数和rand函数（?程序deal.c）产?随机数，然后查看次数除以4的余数。余数?共有4种可能的值（0、1、2和3），指示下?次移动的4种可能?向。在执?移动之前，需要检查两项内容：?是不能?到数组外?，?是不能?到已有字?标记的位置。只要?个条件不满?，就得尝试换?个?向移动。如果4个?向都堵住了，程序就必须终?了。下?是提前结束的?个示例:

A	B	G	H	I	.	.	.	.	.
.	C	F	.	J	K	.	.	.	.
.	D	E	.	M	L	.	.	.	.
.	.	W	X	Y	P	Q	.	.	.
.	.	V	U	T	S	R	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
.	.	.	.	.	.	.	.	.	.
因为Y的4个?向都堵住了，所以没有地?可以放置下?步的Z了。
#include <stdio.h>
#include <stdlib.h>

int main()
{
//诶嘿嘿 
    return 0;
}
#include<stdio.h>
int main()
{
	int yjynb[10][10];
	printf("AFE.......\n");
	printf("BCD.......\n");
	printf("..........\n");
	printf("..........\n");
	printf("..........\n");
	printf("..........\n");
	printf("..........\n");
	printf("..........\n");
	printf("..........\n");
	printf("..........\n");
	return 0;
 } 
