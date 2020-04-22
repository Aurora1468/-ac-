#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 


int main(){  
	ll t,m;
	cin >> t>>m;
	ll num[m][2];
	for(ll i = 0;i<m;i++){
		cin >> num[i][0] >> num[i][1];
	}
	ll dp[t+1] = {0};
	for(ll i = 0;i<m;i++){
		for(ll j = num[i][0];j<=t;j++){
			dp[j] = max(dp[j],dp[j-num[i][0]] + num[i][1]);
			//cout << dp[j]<<endl;
		}
	}
	cout << dp[t];
	return 0;
}
