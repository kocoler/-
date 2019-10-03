#include<stdio.h>
#include<math.h>

int main(){
	int a,b;
	printf("输入直角边长：");
	scanf("%d",&a);scanf("%d",&b);
	long c;
	c=a*a+b*b;
	c=sqrt(c);
	printf("斜边长为：%d" ,c);
	return 0;
	
}
