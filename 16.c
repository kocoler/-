#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	int word,blank,num,e;
	blank=0;
	printf("输入字符串：\n");
	gets(a);
	//scanf("%s",&a);
	for(int i=0;i<=strlen(a)-1;i++){
		if(a[i]<=122&&a[i]>=97){
			word++;
		}
		if(a[i]<=90&&a[i]>=65){
			word++;
		}
		if(a[i]<=57&&a[i]>=48){
			num++;
		}
		if(a[i]==32){
			blank++;
		}
	}	
	e=strlen(a)-word-blank-num;
	e=e/2;
	printf("字母：%d,空格：%d,数字：%d,其他：%d\n",word,blank,num,e);
}
