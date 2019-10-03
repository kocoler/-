#include<stdio.h>

int main() {
	int a,b,c;
	printf("请输入三个数字\n");
	scanf("%d",&a);scanf("%d",&b);scanf("%d",&c);
	int sum;
	sum=a+b+c;
	printf("这三个数的和为%d。\n",sum);
	return 0;
}
