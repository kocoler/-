#include<stdio.h>

int gys(int a,int b);
//int gbs(int a,int b);
int main(){
	int m,n,ys,bs;
	printf("����������:\n");
	scanf("%d",&m);scanf("%d",&n);
	ys=gys(m,n);
	printf("�������Ϊ:%d\n",ys);
	//bs=gbs(m,n);
	bs=m*n/ys;
	printf("��С������Ϊ:%d\n",bs);
	return 0;
}
int gys(int a,int b) {
	int c;
	if(a<b) {
		int tmp;tmp=b;b=a;a=tmp;
	}
	int gysnum;
	while(a%b!=0){
		//gysnum=a%b;
		c=a%b;
		a=b;b=c;
	}
	gysnum=b;
	return gysnum;
}
/*int gbs(int a,int b){
	int c;
	if(a<b){
		int tmp;tmp=b;b=a;a=tmp;
	}
	
}*/
