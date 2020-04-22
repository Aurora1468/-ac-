#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std;
int num[23] = {0};
int n,m;
int aa[23] = {0};
void dfs(int now,int cnt){
	if(cnt == m&&now<=n){
		for(int i = 0;i<m;i++){
			printf("%3d",aa[i]);
		}
		cout <<endl;
		return;
	}
	else if (now>n){
		return;
	}
	aa[cnt] = num[now];
	dfs(now+1,cnt+1);
	//aa[cnt] = 0;
	dfs(now+1,cnt);
}

int main(){
	cin >> n>>m; 
	for(int i = 0;i<n;i++){
		num[i] = i+1;
	}
	//int aa[3] = {0};
	dfs(0,0);
	return 0; 
}
