#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	printf("�����������ϵ����\n");
	scanf("%d",&a);
	printf("������һ����ϵ����\n");
	scanf("%d",&b);
	printf("�����볣���\n");
	scanf("%d",&c);
	int d;d=b*b-4*a*c;
	if(d<0){
		printf("�޽�\n"); 
	}
	float e,f1,f2;
	if(d==0){
		printf("��Ϊ��x1=x2=%d",-b/(2*a));
	}
	if(d>0){
		e=sqrt(d);f1=(-b+e)/(2*a);f2=(-b-e)/(2*a);
		printf("��Ϊ��x1=%f,x2=%f",f1,f2);
	} 
	return 0;
}
