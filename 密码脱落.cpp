#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int dp[1005][1005] = {0};

int main(){  
	string s1;
	string s2;
	cin >> s1;
	s2 = s1;
	reverse(s1.begin(),s1.end());
	int s_len = s1.length();
	s1 = '0' + s1;
	s2 = '0' + s2;
	int max_zc = 0;
	for(int i = 1;i<=s_len;i++){
		for(int j = 1;j<=s_len;j++){
			if(s1[i] == s2[j]){
				dp[i][j] = dp[i-1][j-1] + 1; 
			}
			else{
				dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
			}
			//max_zc = max(max_zc,dp[i][j]);
		}
	}
	cout << s_len - dp[s_len][s_len];
	return 0;
	
}
