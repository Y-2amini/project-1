#include<stdio.h>
#include"add.h"
#include"sub.h"
#include"mul.h"
#include"div.h"
int main()
{
	printf("add two numbers 20 and 10:%d\n",add(20,10));
	printf("sub two numbers 20 and 10:%d\n",sub(20,10));
	printf("mul two numbers 20 and 10:%d\n",mul(20,10));
	printf("div two numbers 20 and 10:%d\n",div(20,10));
	return 0;
}
