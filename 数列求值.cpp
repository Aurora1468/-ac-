#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	int a = 20190324;
	int b = 1;
	int c = 1;
	int d = 1;
	int sum = 0;
	int z=0;
	int i = 3;
	for(i;i<20190324;i++){
		sum = (b + c + d)%10000;
		b = c;
		c = d;
		d = sum;

	}
	printf("%d. %d\n",i,d);
} 
