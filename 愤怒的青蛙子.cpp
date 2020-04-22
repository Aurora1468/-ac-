#include<stdio.h>
int main(){
	int f;
	long long int x = 1;
	scanf("%d",&f);
	for(int i = 0;i<f;i++)
		x = x * 9;
	printf("%d",x);
} 
