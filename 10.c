#include<stdio.h>

int main(){
	int a,n,c;
	n=0;
	printf("ÊäÈëÕûÊý:");
	scanf("%d",&a);
	char b[1000];
	c=a;
	whil(c!=0){
		n++;
		c=c/10;
	} 
	for(int i=0;i<=n-1;i++){
		b[i]=a%10+48;
		a=a/10;
	}
    printf("Êä³ö×Ö·û´®:%s",b);	
	return 0;
}
