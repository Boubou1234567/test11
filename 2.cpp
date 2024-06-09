#include<stdio.h>
int main(){
	int i;
	int a[6];
	int n;
	int num=0;
	for(i=0;i<6;i++){
		scanf("%d ",&a[i]);
	}
	scanf("%d",&n);
	int j;
	for(i=0;i<6;i++){
		j=7;
			for(int m=1;m<=n;m++){
				j--;
				if(j==a[i]){
					j--;
				}
			
		}
		a[i]=j;
	}
//	for(i=0;i<6;i++){
//		printf("%d ",a[i]);
//	}
printf("%d %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4],a[5]);
	return 0;

}
