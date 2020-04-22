#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum = 0;
	if(n == 1||n == 2){
		cout << n;
		return 0;
	}
	int num[n];
	for(int i = 0;i<n;i++){
		num[i] = i+1;
	}
	bool flag = true;
	for(int i = 1;i<n-1;i++){
		if(num[i-1]>num[i]&&num[i]<num[i+1]){
			flag = false;
			break;
		}
	}
	if(flag){
		for(int i = 0;i<n;i++){
				cout << num[i]<<" ";
			}
			cout <<endl;
		sum++;
	}
	while(next_permutation(num,num + n)){
		bool flag = true;
		for(int i = 1;i<n-1;i++){
			if(num[i-1]>num[i]&&num[i]<num[i+1]){
				flag = false;
				break;
			}
		}
		if(flag){
			for(int i = 0;i<n;i++){
				cout << num[i]<<" ";
			}
			cout <<endl;
			sum++;
		}
	}
	cout << sum;
	return 0;
}
