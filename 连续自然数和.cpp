#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
	int m,sum = 0;
	cin >> m;
	int j = 1;
	for(int i = 1;i<=m/2+1;i++){
		for(j = i;j<=m/2+1;j++){
			sum = sum + j;
			if(sum == m)
				cout <<i << " "<< j<<endl;
			else if(sum > m){
				sum = 0;
				break;
			}
		}
	} 
} 


