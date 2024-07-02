#include<stdio.h>
int main(){
	int n,x=0;
	printf("Enter the value:");
	scanf("%d",&n);
	if(n%4==1) printf("%d",1);
	if(n%4==2) printf("%d",n+1);
	if(n%4==3) printf("%d",0);
	if(n%4==0) printf("%d",n);
	return 0;
}
