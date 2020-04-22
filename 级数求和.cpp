#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int k;
	cin >> k;
	double sn = 1,n = 1.0;
	while(sn<k){
		n = n+1.0;
		sn = sn + 1/n;
	}
	cout << n;
}
