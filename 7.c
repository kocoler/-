#include<stdio.h>
#include<string.h>

int main(){
	char a[100];
	printf("«Î ‰»Î–°–¥µ•¥ £∫");
	scanf("%s",a);
	for(int i=0;i<=strlen(a)-1;i++){
	    a[i]=a[i]-32;
	}
	printf("%s\n",a);
	return 0;
}
