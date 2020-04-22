#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

ll shu[1000004] = {0};
ll n,m;
bool pd(ll x){
	ll sum = 0;
	int a = upper_bound(shu,shu+n,x) - shu;
	for(int i = a;i<n;i++){
		sum += (shu[i] - x);
	} 
	if(sum >= m){
		return true;
	}
	return false;
}



int main(){  
	
	cin >> n>>m;
	for(ll i = 0;i<n;i++){
		cin >> shu[i];
	}
	sort(shu,shu+n);
	ll l = 0,r = 9999999999999;
	while(l<=r){
		ll mid = (l+r)/2;
		if(pd(mid)){
			l = mid + 1;
		}
		else{
			r = mid - 1;
		}
		//cout << r<<" "<<l<<endl;
	}
	cout << r;
	return 0;
}
