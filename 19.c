#include<stdio.h>

int main(){
	float a=100;
	for(int i=1;i<=10;i++){
		a=a/2;
	}
	printf("第十次落下的高度为：%f\n",a);
	return 0;
}
