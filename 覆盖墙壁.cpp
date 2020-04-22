#include<bits/stdc++.h>
using namespace std;
typedef long long LL;


int main(){
	int n;
	cin >> n;
	int f[n+1];
	int g[n+1];
	f[0] = 1;g[0] = 0;
	f[1] = g[1] = 1;

	for(int i = 2;i<=n;++i){
		f[i] = (f[i-1] + f[i-2] + g[i-2]*2)%10000;
		g[i] = (f[i-1] + g[i-1])%10000;
	}
	cout << f[n];
	return 0;
}


