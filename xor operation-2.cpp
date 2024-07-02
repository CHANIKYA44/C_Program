#include<stdio.h>
int main(){
	int R,L,x=0;
	printf("Enter the Lower limit:");
	scanf("%d",&L);
	printf("Enter the Upper limit:");
	scanf("%d",&R);
	for(int i=L;i<=R;i++){
		x=x^i;
	}
	printf("%d",x);
	return 0;
}
