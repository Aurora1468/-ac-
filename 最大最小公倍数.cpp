#include<bits/stdc++.h>
using namespace std;

long long lcm(int a,int b){
	return a/__gcd(a,b)*b;
}


int main(){
	long long n;
	cin >> n;
	if(n == 1){
		cout << 1<<endl<<"1 1 1";
		return 0;
	}
	else if(n == 2){
			cout <<2<<endl<<"2 2 2";
			return 0;
	}
	else if(n == 3){
		cout <<6<<endl<<"2 3 3";
		return 0;
	}
	else if(n%2 == 1){
		cout << (n)*(n-1)*(n-2)<<endl<<n<<" "<<n-1<<" "<<n-2;
	}
	else if(n%2 == 0){
		if(n%3 == 0){
			cout << (n-1)*(n-2)*(n-3)<<endl<<n-1<<" "<<n-2<<" "<<n-3;
		}
		else
			cout << (n)*(n-1)*(n-3)<<endl<<n<<" "<<n-1<<" "<<n-3;
	}
	return 0;
}
