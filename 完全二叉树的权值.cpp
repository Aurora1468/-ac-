#include<bits/stdc++.h>
using namespace std;
typedef long long ll;  
struct jl{
	ll sc;
	ll cs;
};

int main(){  
	ll n;
	cin >> n;
	jl ret;
	ret.sc = -0x3f3f3f3f;
	ret.cs = 1;
	ll q = 0;
	ll sum = 0;
	ll flag = 0;
	
	for(ll i = 0;i<n;i++){
		ll a = pow(2,q);
		ll temp;
		cin >> temp;
		if(flag<a){
			sum += temp;
			flag++;
			if(flag == a){
				flag = 0;
				if(sum>ret.sc){
					ret.cs = q+1;
					ret.sc = sum;
				}
				q++;
				sum = 0;
			}
		}		
	}
	cout << ret.cs;
	return 0;
}


