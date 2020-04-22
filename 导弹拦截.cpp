#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int dd[100002];
int main(){  
	int n = 0;
	int temp;
	while(cin>>temp){
		dd[n] = temp;
		n++;
	} 
	int ans = 1;
	int dp[n];
	for(int i = 0;i<n;i++){
		dp[i] = 1;
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<i;j++){
			if(dd[i]<=dd[j]){
				dp[i] = max(dp[i],dp[j] + 1);
				//cout << i<<" " <<dp[i]<<endl;
				ans = max(ans,dp[i]);
			}
		}
	}

	int dp2[n];
	for(int i = 0;i<n;i++){
		dp2[i] = 1;
	}
	cout << ans<<endl;
	int aaa = 1;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<i;j++){
			if(dd[i]>dd[j]){
				dp2[i] = max(dp2[i],dp2[j] + 1);
				aaa = max(aaa,dp2[i]);
			}
		}
	}
	cout << aaa;
	return 0;
}
