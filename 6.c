#include<stdio.h>

int main(){
	int a,b;
	printf("ÇëÊäÈë²ãÊı£º");
	scanf("%d",&a);
	b=2*a-1;
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(j<=b/2+1-i||j>b/2+i){
			 printf(" ");
			}else {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
