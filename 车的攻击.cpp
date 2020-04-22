#include<bits/stdc++.h>
using namespace std;
typedef long long LL;  

int vis1[1000006];
int vis2[1000006];

int main(){  
	LL n,k;
	cin >> n>>k;
	LL a,b;
	
	for(LL i = 0;i<k;++i){
		scanf("%lld %lld",&a,&b);
		vis1[i] = a;
		vis2[i] = b;
	}
	sort(vis1,vis1+k);
	sort(vis2,vis2+k);
	LL sum1 = unique(vis1,vis1 + k) - vis1;
	LL sum2 = unique(vis2,vis2 + k) - vis2;
	sum1 = n - sum1;
	sum2 = n - sum2;
	//cout << sum1<<endl;
	cout << n*n - sum1*sum2;
	return 0;
}


