#include<stdio.h>

int sum(float x, float y){
	return x+y;
}

int main(){
	float a=10.6,b=5.6,s;
	s=sum(a,b);
	printf("%f",s);
}
