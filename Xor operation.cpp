#include<stdio.h>
int main(){
	int n,x=0;
	printf("Enter the value:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		x=x^i;
	}
	printf("%d",x);
	return 0;
}
