#include<bits/stdc++.h>
using namespace std;
int main(){
	int T,M;
	cin >> T;
	cin >>M;
	int num[M][2];
	for(int i = 0;i<M;i++){
		cin >> num[i][0]>>num[i][1];
	}
	int dp[T+1] = {0};
	for(int x = 0;x<M;x++){
		for(int y = T;y>=num[x][0];y--){
			dp[y] = max(dp[y],num[x][1]+dp[y-num[x][0]]);
		}
	}
	cout << dp[T];
}
