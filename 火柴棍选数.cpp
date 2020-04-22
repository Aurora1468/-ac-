#include<bits/stdc++.h>
using namespace std;

int num[1000] = {6,2,5,5,4,5,6,3,7,6};
int n,sum = 0;

void dfs(int sy,vector<int> a){
	if(a.size() == 3&&sy == 0&&a[0]+a[1] == a[2]){
		sum++;
		cout << a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
		return;
	}
	for(int i = 0;i<1000;i++){
		a.push_back(i);
		cout << num[i]<<endl;
		sy = sy - num[i];
		cout << a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
		dfs(sy,a);
		a.pop_back();
		sy = sy + a[i];
	}
}

int main(){
	cin >> n;
	n = n-4;
	for(int i = 10;i<1000;i++){
		num[i] = num[i/10] + num[i%10];
	}
	vector<int> a(3,0);
	dfs(n,a);
	cout << sum;
}

