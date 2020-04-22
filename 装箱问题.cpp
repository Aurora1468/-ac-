#include<bits/stdc++.h>
using namespace std;
int main(){
	int L;
	cin >> L;
	int n;
	cin >> n;
	int num[n+1];
	for(int i = 0;i<n;i++){
		cin >> num[i];
	}
	int dp[L+1] = {0};
	for(int x = 0;x<n;x++){
		for(int y = L;y>=num[x];y--){
			dp[y] = max(dp[y],dp[y-num[x]]+num[x]);
			//cout << y<< " "<<dp[y]<<endl;
		}
	} 
	cout << L-dp[L];
} 
