#include<bits/stdc++.h>
using namespace std;
int num[200] = {0};
int n,m;
int cnt = 0;
void dfs(int now,int sum){
	//cout << sum <<endl;
	if(sum == m){
		cnt++;
		return;
	}
	else if(sum>m){
		return;
	}
	else if(now == n){
		return;
	}
	dfs(now+1,sum+num[now]);
	dfs(now+1,sum);
}

int main(){
	
	cin >> n>>m;
	for(int i = 0;i<n;i++){
		cin >> num[i];
	} 
	dfs(0,0);
	cout << cnt;
	return 0; 
}
