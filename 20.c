#include<stdio.h>

int main(){
	float sum;
    float a;
    sum=0;
	a=1;
	for(int i=1;i<=20;i++){
		a=1;
		for(int j=1;j<=i;j++){
			a=a*j;
		}
		sum=sum+a;
	}
	printf("1!+2!+...+20!=%f\n",sum);
	return 0;
}
