/*
	P1307 数字反转
	题目描述
	给定一个整数，请将该数各个位上数字反转得到一个新数。新数也应满足整数的常见形式，
	即除非给定的原数为零，否则反转后得到的新数的最高位数字不应为零（参见样例2）。
	
	输入格式
	一个整数N
	
	输出格式
	一个整数，表示反转后的新数。
	
	输入输出样例
	输入 #1
	123
	输出 #1
	321
	输入 #2
	-380
	输出 #2
	-83
	说明/提示
	数据范围
	-1,000,000,000≤N≤1,000,000,000。 
	noip2011普及组第一题
*/
#include<stdio.h>
int main()
{
    int n,xx,yy=0;
    scanf("%d",&n);
    while(n)
    {
        xx=n%10;     //取最后一位
        n=n/10;       //去掉最后一位
        yy=yy*10+xx;
    }
    printf("%d",yy);
    return 0;
}

