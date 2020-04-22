#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

struct hj{
	double zl;
	double jz;
	double quan;
};

bool cmp(hj a,hj b){
	if(a.quan < b.quan){
		return false;
	}
	return true;
}

int main(){
	int n,t;
	cin >> n>>t;
	hj aa[n];
	for(int i = 0;i<n;++i){
		cin >> aa[i].zl >> aa[i].jz;
		aa[i].quan = aa[i].jz / aa[i].zl;
	}
	sort(aa,aa+n,cmp);
	double sum = 0;
	for(int i = 0;i<n;++i){
		//cout << aa[i].zl <<" " <<aa[i].jz<<" "<<aa[i].quan<<endl;
		if(t > aa[i].zl){
			t -= aa[i].zl;
			sum += aa[i].jz;
		}
		else {
			
			sum += aa[i].quan * t;
			break;
		}
	}
	printf("%.2lf",sum);
	return 0;
}


