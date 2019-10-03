#include<stdio.h>

int main(){
	int sum,a;
	for(int i=1;i<=1000;i++){
		//a=i;
		sum=0;
	    /*while(a>1){
		    for(int j=2;j<=i;j++){
			    if(a%j==0){
			    sum=sum+j;
				a=a/j;
				break;
			}	
		}
	}
		if(sum==i-1){
		printf("%d ",i);
		}*/
		for(int j=1;j<i;j++){
			if(i%j==0){
				sum=sum+j;
			}
		}
		if(sum==i){
			printf("%d ",i);
		}
	}
	return 0;
}
