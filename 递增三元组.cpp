#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int num[3][n];
	for(int i = 0;i<3;i++){
		for(int j = 0;j<n;j++){
			cin >> num[i][j];
		}
	}
	sort(num[0],num[0]+n);
	sort(num[1],num[1]+n);
	sort(num[2],num[2]+n);
	int sum = 0;
	for(int i = 0;i<n;i++){
		int x = lower_bound(num[0],num[0]+n,num[1][i])-num[0];
		//cout << x<<endl;
		int y = n-(upper_bound(num[2],num[2]+n,num[1][i])-num[2]);
		sum = sum + x*y;
	}
	cout <<sum;
	return 0;
}
