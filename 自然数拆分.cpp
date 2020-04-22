#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int n;

void dfs(int sum,vector<int> aa){
	if(sum == n){
		//cout << sum<<endl;
		int aa_len = aa.size();
		//cout << aa.size()<<endl;
		for(int i = 0;i<aa_len-1;i++){
			cout << aa[i]<<"+";
		}
		cout << aa[aa_len-1];
		cout << endl;
		//cout << aa[aa_len]<<endl;*/
		return;
	} 
	for(int i = aa[aa.size()-1];i<n;i++){
		if(sum+i<=n){
			//cout << sum+i<<" "<<i<<" "<<aa.size()<<endl;
			aa.push_back(i);
			dfs(sum+i,aa);
			aa.pop_back();
		}
		else{
			return;
		}
	}
	
	
	
}

int main(){
	
	cin >> n;
	if(n == 0){
		return 0;
	}
	for(int i = 1;i<=n/2;i++){
		vector<int> aa;
		aa.push_back(i);
		dfs(i,aa);
	}
	return 0;
}
