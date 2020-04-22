#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 


int main(){  
	ll n,x;
	cin >> n>>x;
	ll lose[n];
	ll win[n];
	ll use[n];
	for(ll i = 0;i<n;i++){
		cin >> lose[i]>>win[i]>>use[i];
	} 
	ll dp[x+1] = {0};
	ll dp2[x+1] = {0};
	for(ll i = 0;i<n;i++){
		for(ll j = x;j>=use[i];j--){
			dp[j] = max(dp[j] + lose[i],dp[j-use[i]]+win[i]);
		}
		for(ll j = use[i]-1;j>=0;j--){
			dp[j] = lose[i] + dp[j];
		}
	}
	cout << dp[x]*5;
	return 0;
}
