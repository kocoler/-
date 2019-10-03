#include<stdio.h>
#include<stdbool.h>
int main(){
	for(int i=101;i<=200;i++){
		bool flag=true;
		for(int j=2;j<=100;j++){
			if(i%j==0){
				flag=false;
				break;
			}
		}
		if(flag) printf("%d ",i);
	}
	return 0;
}
