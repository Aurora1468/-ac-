#include<bits/stdc++.h>
using namespace std;
int n,r;
int num[22] = {0};
int temp[22] = {0};
int vis[22] = {0};
void dfs(int a){
	if(a > r){
		for(int i = 0;i<r;i++)
			cout << temp[i]<<" ";
		cout << endl;
		return;
	}
	for(int x = 1;x<=n;x++){
		if(!vis[x]){
			temp[a] = x;
			vis[x] = 1;
			dfs(a+1);
			vis[x] = 0;
		}
	}
}

int main(){
	
	cin >> n>>r;
	for(int i = 1;i<=22;i++)
		num[i] = i;
	dfs(0);
}
