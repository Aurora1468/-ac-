#include<bits/stdc++.h>
using namespace std;
bool zs(int x){
	if(x == 1){
		return false;
	} 
	for(int i = 2;i<=sqrt(x);i++)
		if(x%i==0)
			return false;
	return true;
}
int main(){
    int n;
	cin >> n;
	for(int a = 2;a<n;a++){
		for(int b = 2;b<n-a;b++){
			int c = n-a-b;
			if(zs(a)&&zs(b)&&zs(c)){
				cout << a<<" "<<b<<" "<<c;
				return 0; 
			}
		}
	} 
	return 0;
}

 
