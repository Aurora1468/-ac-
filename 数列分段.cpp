#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n>>m;
	int ans = 1;
	int k = 0;
	while(n--){
		int temp;
		cin >> temp;
		if(k + temp<=m){
			k = k + temp;
		}
		else{
			ans++;
			k = temp;
		}
	}
	cout << ans;
}
