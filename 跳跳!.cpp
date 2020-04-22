#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main() {  
	ll n;
	cin >> n;
	multiset<ll> s;
	for(ll i = 0;i<n;i++){
		ll temp;
		cin >> temp;
		s.insert(temp);
	}
	ll sum = 0;
	ll now = 0;
	while(!s.empty()){
		multiset<ll>::iterator it = s.end();
		it--;
		
		sum += pow(abs(now - *it),2);
		now = *it;
		s.erase(it);
		if(!s.empty()){
			it = s.begin();
			sum += pow(abs(now - *it),2);
			now = *it;
			s.erase(it);
		}
	}
	cout << sum;
	return 0; 
}
