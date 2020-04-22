#include<bits/stdc++.h>
using namespace std;
int sum = 1;
int num[1002] = {0};
int dg(int x){
	if(num[x]){
		return num[x];
	}
	else if(x == 1){
		return 1;
	}
	int ret = 1;
	for(int i = 1;i<=x/2;i++){
		ret += dg(i);
	}
	num[x] = ret;
	return ret;
}

int main(){

	int n;
	cin >> n;
	dg(n);
	num[1] = 1;
	cout << num[n];
	return 0; 
}
