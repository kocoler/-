#include<stdio.h>

int main(){
	int a;
	printf("输入4位整数n\n");
	scanf("%d",&a);
	int b,c,d;
	b=a/1000;c=a/100-b*10;d=a%10;a=(a%100)/10;
	printf("个位数为%d,十位数为%d,百位数为%d,千位数是%d\n",d,a,c,b);
	return 0;
}
