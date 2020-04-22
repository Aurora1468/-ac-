#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int num[300];
int n,a,b; 
int xx[2] = {-1,1};
int ret = 99999999;
int vis[300] = {0};
void dfs(int x,int sum){
	//cout << sum<<endl;
	if(x == b-1){
		ret = min(ret,sum);
		//cout << ret;
		return;
	} 
	else if(sum >= ret){
		return;
	}
	for(int i = 0;i<2;i++){
		int dx = x + xx[i]*num[x];
		if(dx>=0&&dx<n&&!vis[dx]){
			vis[dx] = 1;
			dfs(dx,sum+1);
			vis[dx] = 0;
		}
	}
}

int main(){
	cin >> n>>a>>b;
	for(int i = 0;i<n;i++){
		cin >> num[i];
	}
	vis[a-1] = 1;
	dfs(a-1,0);
	if(ret == 99999999){
		cout << -1;
	}
	else 
		cout << ret;
	return 0;
}
