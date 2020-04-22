#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll fsx[1000005];

int main(){
	ll m,n;
	cin >> m>>n;
	
	ll sum = 0;
	for(ll i = 0;i<m;i++){
		cin >> fsx[i];
	}
	sort(fsx,fsx + m);
	for(ll i = 0;i<n;i++){
		ll temp;
		cin >> temp;
		ll a = lower_bound(fsx,fsx+m,temp) - fsx;
		//cout << a<<endl;
		if(a == 0)
			sum = sum + abs(fsx[a]-temp);
		else
			sum = sum + min(abs(fsx[a]-temp),abs(temp-fsx[a-1]));
	}
	cout << sum;
	return 0;
}
