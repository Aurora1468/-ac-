#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 


int main(){  
	int n;
	cin >> n;
	int num[n][n] = {0};
	int sum = 0;
	for(int i = 1;i<=n;i++){
		//cout << i<<endl;
		for(int j = 0;j<i;j++){
			cin >> num[i-1][j];
		}
	}
	for(int i = n-2;i>=0;i--){
		for(int j = 0;j<n;j++){
			num[i][j] += max(num[i+1][j],num[i+1][j+1]);
		}
	}
	cout << num[0][0];
	return 0;
}
