#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	int b[1000];
	int n,m,lena,sum=0;
	printf("�������Ϊ:");
	scanf("%d",&n);
	//scanf("%d",&a);
	//int lena=sizeof(a)/sizeof(a[0]);
	//printf("%d",lena);
	if(n==2){
		printf("�����������:");
		/*for(int i=0;i<=lena-1;i++){
			scanf("%d",&a[i]);
		}*/
		scanf("%s",a);lena=strlen(a);
		//printf("%d",lena);
		for(int i=0;i<=lena-1;i++){
			int num=1;
			for(int j=lena-1;j>i;j--){
				num=num*2;
			}
			num=(a[i]-48)*num;
			printf("%d,%d\n",num,sum);
			sum=sum+num;
		}
		printf("ʮ����Ϊ:%d",sum);
	}
	if(n==10){
		printf("����ʮ������:");
		scanf("%d",&m);
		int k=0;
		b[0]=0;
	    while(m!=0){
			k++;
	    	b[k]=m%2;
			m=m/2;
			//printf("%d",b[k]);
	    	
		}
		printf("������Ϊ:");
		for(int i=k;i>0;i--){
			//printf("%d",i);
			printf("%d",b[i]);
		}
	}
	if(n!=2&&n!=10){
		printf("�������\n");
	}
	return 0;
}
