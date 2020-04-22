#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

LL gcd(LL a,LL b){
	while(b){
		LL t = b;
		b = a%b;
		a = t;
	}
	return a;
}

int ksm(int a,int b){
	int ret = 1;
	while(b){
		if(b&1){
			ret = ret * a;
		}
		a = a*a;
		b>>=1;
	}
	return ret;
}
int main(){
	LL a,b,c;
	cin >> a>>b>>c;
	LL d = a/gcd(a,b)*b;
	cout << c/gcd(c,d)*d;
	return 0;
}
