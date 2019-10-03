#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	printf("输入字符串：");
	//gets(a);
	scanf("%s",a);
	int num=0;
	int lena=strlen(a);
	char c=a[0];
	if(c=='+'){
	    for(int i=1;i<=lena-1;i++){
		num=num*10+(a[i]-48);	
	    }
		printf("转换为整数为：%d",num);
	}
	if(c=='-'){
     	for(int i=1;i<=lena-1;i++){
		num=num*10+(a[i]-48);	
	    }
		printf("转换为整数为：%d",-num);
	}	
	if(c!='-'&&c!='+'){
		for(int i=0;i<=lena-1;i++){
		num=num*10+(a[i]-48);	
	    }
	    printf("转换为整数为：%d",num);
	}
	
	return 0;
}
