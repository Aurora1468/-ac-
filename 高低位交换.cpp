#include<bits/stdc++.h>
using namespace std;
typedef long long ll;  

ll ksm(ll a,ll b){
	ll ret = 1;
	while(b>0){
		if(b&1){
			ret = ret * a;
		}
		a *= a;
		b>>=1;
	}
	return ret;
}

int main(){  
	ll n;
	cin >> n;
	string s;
	while(n){
		s = char(n%2 + '0') + s;
		n /=2;
	} 
	while(s.length()<32){
		s = '0' + s;
	}
	//cout << s<<endl;
	string a = s.substr(0,16);
	string b = s.substr(16,16);
	s = b + a;
	//cout << s<<endl;
	reverse(s.begin(),s.end());
	ll sum = 0;
	for(ll i = 31;i>=0;--i){
		if(s[i] == '1'){
			sum = sum + ksm(2,i);
		}
	}
	cout << sum;
	return 0;
}


