#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x;
	cin >> n>> x;
	int num[n];
	long long sum = 0;
	for(long long i = 0;i<n;i++){
		long long temp;
		cin >> temp;
		if(temp>x){
			sum = sum+(temp-x);
			temp = x;
		}
		num[i] = temp;
	}
	for(long long i = 0;i<n-1;i++){
		long long temp = num[i]+num[i+1];
		if(temp>x){
			long long aa = temp-x;
			if(aa<num[i+1]){
				sum += aa;
				num[i+1] -= aa;
			}
			else if(aa == num[i+1]){
				sum += num[i+1];
				num[i+1] = 0;	
			}
		}
	}
	cout << sum;
	return 0;
}
