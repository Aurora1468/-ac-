#include<cstdio>
#include<iostream> 
#include<cstring>
using namespace std;
int main(){
	int i[10];
	int a = 0;
	int sum = 0;
	for(int x = 0;x<10;x++){
		scanf("%d",&i[x]);
	}
	scanf("%d",&a);
	a = a + 30;
	for(int z = 0;z<10;z++){
		if(i[z]<=a)
			sum++;
	}
	printf("%d",sum);
}
