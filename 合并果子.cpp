#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin >> n;
	priority_queue<long long,vector<long long>,greater<long long> > q;
	for(int i = 0;i<n;i++){
		int x;
		cin >> x;
		q.push(x);
	}
	long long ans = 0;
	while(q.size()>1){
		long long a = q.top();
		q.pop();
		//cout << a<<endl;
		long long b = q.top();
		q.pop();
		//cout <<b<<endl;
		ans = ans + a+b;
		q.push(a+b);
		//cout << ans<<endl;
	}
	cout << ans;
	return 0;
}
