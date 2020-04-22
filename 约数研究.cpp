#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int num[1000006];

int main(){
	int n;
	cin >> n;
	//num[1] = 1;
	for(int i = 1;i<=n;++i){
		for(int j = 1;j*i<=n;j++){
			num[j*i]++;
		}
	}
	LL sum = 0;
	for(int i = 1;i<=n;++i){
		sum+=num[i];
	}
	cout << sum;
	return 0;
}










