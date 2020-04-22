#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum = 0;
	for(int i = 1;i<=2020;i++){
		for(int j = i;j<=2020;j++){
			char ii[10];
			itoa(i,ii,3);
			char jj[10];
			itoa(j,jj,3);
			int a1 = count(ii,ii + strlen(ii),'1');
			int a2 = count(ii,ii + strlen(ii),'2');
			int b1 = count(jj,jj + strlen(jj),'1');
			int b2 = count(jj,jj + strlen(jj),'2');
			if(abs(a1-a2) == abs(b1-b2)){
				sum++;
				cout << sum<<" "<<i<<" "<<j<<endl;
			}
		}
	}
	cout<<sum;
	return 0;
}
