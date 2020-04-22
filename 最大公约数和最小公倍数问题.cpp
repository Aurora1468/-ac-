#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
	int p,q,sum = 0;
	cin >> p >> q;
	for(int i = 1;i<=q;i++){
		if(i%p==0){
			for(int j = 1;j<=q;j++){
				if(j%p == 0){ 
					//cout << i <<" "<< j<<endl; 
					if(__gcd(i,j) == p&&i/__gcd(i,j)*j==q){
						sum++;
					} 
				} 
			}
		}
	}
	cout << sum;
} 


