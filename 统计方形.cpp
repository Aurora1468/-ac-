#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int n,m;
	cin >> n>>m;
	long long z = 0,c = 0;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++){
				z = z + min(i,j);
				c = c + (i*j);
		}
	}
	cout << z<<" "<<c-z;
	return 0; 
}
