#include<stdio.h>
#include<string.h>
int main(){
	char a[1000],b[1000];
	printf("输入字符串：\n");
	gets(a);
	int c=strlen(a)-1;
	if(strlen(a)==0){
		printf("输入的是空字符串\n");
	} else{
		for(int i=0;i<=strlen(a)-1;i++){
		b[c-i]=a[i];
	  }
	  printf("反转后的字符串:%s\n",b);
	}	
	return 0;
}
