#include<stdio.h>
#include<string.h>
int main(){
	char a[1000],b[1000];
	printf("�����ַ�����\n");
	gets(a);
	int c=strlen(a)-1;
	if(strlen(a)==0){
		printf("������ǿ��ַ���\n");
	} else{
		for(int i=0;i<=strlen(a)-1;i++){
		b[c-i]=a[i];
	  }
	  printf("��ת����ַ���:%s\n",b);
	}	
	return 0;
}
