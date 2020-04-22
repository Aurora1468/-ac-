#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int num[n];
	for(int i = 0;i<n;i++){
		cin >> num[i];
	}
	sort(num,num + n);
	int aa = num[n-1];
	for(int i = 1;i<n;i++){
		//cout << aa<<endl;
		aa = __gcd(aa,num[i]-num[i-1]);
	}

	cout << (num[n-1]-num[0])/aa + 1;
	return 0;
}
