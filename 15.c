#include<stdio.h>

int main(){
	int n,sum,a;
	printf("输入总项数:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		sum=sum+a; 
	} 
	float avg;
	avg=sum/n;
	printf("平均数为:%f\n",avg);
	return 0;
}
