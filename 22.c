#include<stdio.h>

void bubblesort(int a[],int lena){
	for(int i=1;i<=lena-1;i++){
		for(int j=0;j<=lena-i-1;j++){
		 if(a[j]>a[j+1]){
		 	int tmp;tmp=a[j];a[j]=a[j+1];a[j+1]=tmp;
		 }
		}
	}
}
int main(){
	int a[1000];
	int lena;
	//scanf("%d",a);
	printf("输入数组长度:");scanf("%d",&lena);
	printf("输入数组:\n");
	for(int i=0;i<=lena-1;i++){
		scanf("%d",&a[i]);
	}
	bubblesort(a,lena);
	for(int i=0;i<=lena-1;i++) {
		printf("%d",a[i]);
	}
	return 0;
}
