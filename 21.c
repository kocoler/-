#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	char a[1000],b[1000];
	int lena,lenb;
	bool flag=true;
	printf("�����һ���ַ���\n");
	gets(a);
	printf("����ڶ����ַ���\n");
	gets(b);
	lena=strlen(a);lenb=strlen(b);
	if(lena!=lenb) {
		flag=false;
	    printf("����ͬ\n");
	}
	if(lena==lenb) {
		for(int i=0;i<=lena-1;i++){
			if(a[i]!=b[i]) {
				flag=false;
				printf("����ͬ\n");
				break;
			}
		}
	}
	if(flag) printf("��ͬ\n");
	return 0;
}
