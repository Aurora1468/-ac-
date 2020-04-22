#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,temp = 2;
	cin >> n;
	int sum = 1;
	while(sum < n){
		//cout << sum<<endl;
		sum = sum + temp;
		///cout << temp <<endl;
		temp++;
	}
	
	
	if((temp-1)%2 == 0) {
		cout << temp-1-(sum-n)<<"/"<<sum-n+1;
	}
	else 
		cout <<  sum-n+1<< "/"<<temp-(sum-n)-1;
	return 0;
}
