#include<stdio.h>

int main(){
	int n,sum,a;
	printf("����������:\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a);
		sum=sum+a; 
	} 
	float avg;
	avg=sum/n;
	printf("ƽ����Ϊ:%f\n",avg);
	return 0;
}
