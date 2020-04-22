#include<bits/stdc++.h>
using namespace std;

int sum = 0;
long long jiyi[1000][1000] = {0};

int digui(int k,int n){
	if(k == 0||k == n){
		return 1;
	}
	else if(jiyi[k][n])
		return jiyi[k][n];
	else
		jiyi[k][n] = digui(k,n-1) + digui(k-1,n-1);
	return jiyi[k][n];
}

int main(){
	int k ,n;
	cin >>k>>n;
	cout << digui(k,n);
} 
