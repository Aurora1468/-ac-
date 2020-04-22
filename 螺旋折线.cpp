#include<bits/stdc++.h>
using namespace std;
typedef long long ll;  

int main(){  
	ll x,y;
	cin >> x>>y;
	ll cs = max(abs(x),abs(y));
	ll sum = 4*(cs-1)*cs;
	ll d1 = x - (-cs);
	ll d2 = y - (-cs);
	if(y>x){
		cout << sum + (d1 + d2);
	} 
	else {
		cout << sum + (8*cs - d1 -d2); 
	}
	return 0;
}


