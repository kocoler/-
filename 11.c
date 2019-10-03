#include<stdio.h>

int main(){
	int n;
	printf("输入项数：");
	scanf("%d",&n); 
	if(n==0){
		printf("输入错误\n");
	}
	if(n>0){
		int a1,a2,num;
		a1=1;a2=1;
		for(int i=1;i<=n;i++){
			if(i==1) {
			printf("%d ",a1);
			}
			if(i==2) {
			printf("%d ",a2);
			}
			if(i>=3){
			    num=a1+a2;
				a1=a2;
			    a2=num;
			    printf("%d ",num);
			}
			
		}
	}
	return 0;
}
