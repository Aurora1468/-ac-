#include<bits/stdc++.h>
using namespace std;
typedef long long ll;  
int dp[1000006] = {0};

int main(){  
	ll n;
	cin >> n;
	ll num[n];
	for(ll i = 0;i<n;i++){
		cin >> num[i];
		dp[num[i]] = 1;
	}
	sort(num,num+n);
	ll sum = 0;
	ll ret = 0;
	for(ll i = 1;i<1000006;i++){
		//cout <<i<<" "<< sum<<endl;
		
		//bool flag = true;
		for(ll j = 0;j<n;j++){
			if(num[j] > i){
				break;
			}
			else{
				if(i>num[j]&&dp[i-num[j]]){
					dp[i] = 1;
					sum++;
					//flag = false;
					break;
				}
			}
		}
		if(sum == 50){
			cout << ret;
			return 0;
		}
		if(!dp[i]){
			sum = 0;
			ret++;
		}
		//cout << i<<" "<<dp[i]<<endl;
	}
	cout << "INF";
	return 0;
}


