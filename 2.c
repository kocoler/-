#include<stdio.h>

int main(){
	int a;
	printf("����4λ����n\n");
	scanf("%d",&a);
	int b,c,d;
	b=a/1000;c=a/100-b*10;d=a%10;a=(a%100)/10;
	printf("��λ��Ϊ%d,ʮλ��Ϊ%d,��λ��Ϊ%d,ǧλ����%d\n",d,a,c,b);
	return 0;
}
