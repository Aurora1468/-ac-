#include<bits/stdc++.h>
using namespace std;
int n,k;
int num[10000] = {0};
int aa = 0;
bool sushu(int x){
	for(int i = 2;i<=x/2;i++){
		if(x%i == 0)
			return false;
	}
	return true;
}

void dfs(int p,int x,int sum){
	//cout << cnt<<endl;
	if(x == k){
		if(sushu(sum)){
			//cout << x<< " "<<sum<<endl;
			aa++;
			//cout << aa<<endl;
		}
		return;
	}
	if(p == n)
		return;
	dfs(p + 1,x + 1,sum + num[p]);
	dfs(p + 1,x,sum);
}

int main(){
	
	cin >> n>>k;
	for(int i = 0;i<n;i++){
		cin >> num[i];
	}
	dfs(0,0,0);
	
	cout << aa;
}
