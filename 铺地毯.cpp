#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int a[10001],b[10001],x[10001],y[10001],s[10001],p,q;
	cin >> n;
	for(int i = 1;i<=n;i++){
		cin >> a[i] >> b[i] >> x[i] >> y[i];
	}
	int c,d;
	cin >> c>>d;
	for(int i = n;i>=1;i--){
		if(c>=a[i]&&c<a[i]+ x[i]&&d>=b[i]&&d<b[i]+ y[i]){
			cout << i;
			return 0;
		}
	}
	cout << -1;
	return 0;
} 

