#include<stdio.h>

int main(){
	int a,b;
	printf("����һ��������:");
	scanf("%d",&a);
	printf("%d=",a);
	b=a;
	while(a>1){
		for(int i=2;i<=b;i++){
			if(a%i==0){
			printf("%d*",i);
			a=a/i;
			break;
			}	
		}
	}
	printf("1");
	return 0;
}
