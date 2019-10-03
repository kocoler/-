#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
	char a[1000],b[1000];
	int lena,lenb;
	bool flag=true;
	printf("输入第一个字符串\n");
	gets(a);
	printf("输入第二个字符串\n");
	gets(b);
	lena=strlen(a);lenb=strlen(b);
	if(lena!=lenb) {
		flag=false;
	    printf("不相同\n");
	}
	if(lena==lenb) {
		for(int i=0;i<=lena-1;i++){
			if(a[i]!=b[i]) {
				flag=false;
				printf("不相同\n");
				break;
			}
		}
	}
	if(flag) printf("相同\n");
	return 0;
}
