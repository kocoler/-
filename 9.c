#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	printf("�����ַ�����");
	//gets(a);
	scanf("%s",a);
	int num=0;
	int lena=strlen(a);
	char c=a[0];
	if(c=='+'){
	    for(int i=1;i<=lena-1;i++){
		num=num*10+(a[i]-48);	
	    }
		printf("ת��Ϊ����Ϊ��%d",num);
	}
	if(c=='-'){
     	for(int i=1;i<=lena-1;i++){
		num=num*10+(a[i]-48);	
	    }
		printf("ת��Ϊ����Ϊ��%d",-num);
	}	
	if(c!='-'&&c!='+'){
		for(int i=0;i<=lena-1;i++){
		num=num*10+(a[i]-48);	
	    }
	    printf("ת��Ϊ����Ϊ��%d",num);
	}
	
	return 0;
}
