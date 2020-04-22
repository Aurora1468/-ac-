#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool zhishu(int num){
	for(int i = 2;i<=num/2;i++)
		if(num%2 == 0)
			return false;
	return true;
}
int main(){
	int n = 1999999874;
	//cin >> n;
	for(int x = 2;x<n/2;x++){
		if(n%x==0)
			if(zhishu(x))
				//if(zhishu(n/x)){
					if(x>n/x){
						cout << x;
						break;
					}
					else{
						cout << n/x;
						break;
					}
				//}
	}
}
