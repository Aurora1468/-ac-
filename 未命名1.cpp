#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int main(){
	char x;
	scanf("%c",&x);
	string line;
	int sum = 0;
	while(getline(cin,line)){
		for(int i = 0;i<line.length();i++){
			if(line[i] <= x)
				sum = sum + 1;
			else{
				printf("%d",sum);
				return 0;
			}	
		}
	}
	printf("%d",sum);
	return 0;
} 
