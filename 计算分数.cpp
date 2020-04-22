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
LL fz[3000][2];
LL cnt = 0;

int main(){
	LL b;
	scanf("%lld/%lld",&fz[cnt][0],&b);
	fz[cnt][1] = b;
	cnt++;
	LL fm = b;
	while(scanf("%lld/%lld",&fz[cnt][0],&b)!=EOF){
		fz[cnt][1] = b;
		fm = fm/gcd(fm,b)*b;
		++cnt;
	}
	LL fzz = 0;
	for(int i = 0;i<cnt;++i){
		fzz += (fm/fz[i][1])*fz[i][0];
	}
	LL temp = gcd(fzz,fm);
	fzz /= temp;
	fm /= temp;
	if(fm == 1){
		cout << fzz;
	}
	else if(fm<0){
		cout << '-'<<fzz<<"/"<<abs(fm);
	}
	else{
		cout <<fzz<<"/"<<fm;
	}
	return 0;
}










