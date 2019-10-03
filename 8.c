#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	printf("请输入二次项系数：\n");
	scanf("%d",&a);
	printf("请输入一次项系数：\n");
	scanf("%d",&b);
	printf("请输入常数项：\n");
	scanf("%d",&c);
	int d;d=b*b-4*a*c;
	if(d<0){
		printf("无解\n"); 
	}
	float e,f1,f2;
	if(d==0){
		printf("解为：x1=x2=%d",-b/(2*a));
	}
	if(d>0){
		e=sqrt(d);f1=(-b+e)/(2*a);f2=(-b-e)/(2*a);
		printf("解为：x1=%f,x2=%f",f1,f2);
	} 
	return 0;
}
