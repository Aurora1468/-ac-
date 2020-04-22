#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
ll xx[8] = {-2,-1,1,2,2,1,-1,-2} ;
ll yy[8] = {1,2,2,1,-1,-2,-2,-1};
int main(){  
	ll x,y,a,b;
	cin >> x >> y >> a >> b;
	ll dp[x+2][y+2] = {0};
	//cout << dp[1][6]<<endl;
	ll aa[9][2];
	for(ll i = 0;i<8;i++){
		aa[i][0] = a + xx[i];
		aa[i][1] = b + yy[i];
		dp[aa[i][0]][aa[i][1]] = 0;
		//cout << aa[i][0]<<" "<<aa[i][1]<<endl;
	}
	//cout << "z"<<" "<<aa[5][0]<<" "<<aa[5][1]<<endl;
	aa[8][0] = a;
	aa[8][1] = b;
	for(ll i = 0;i<=max(x,y);i++){
		bool flag = true;
		for(ll z = 0;z<9;z++){
			if((0==aa[z][0])&&(i==aa[z][1])){
				flag = false;
				break;
			}
		}
		if(flag)
			dp[0][i] = 1;
		else{
			for(int j = i;j<=max(x,y);j++){
				dp[0][j] = 0;
			}
			break;
		}
	}
	//cout << "z"<<" "<<aa[5][0]<<" "<<aa[5][1]<<endl;
	for(ll i = 0;i<=max(x,y);i++){
	//	cout << "z"<<" "<<aa[5][0]<<" "<<aa[5][1]<<endl;
		bool flag = true;
		for(ll z = 0;z<9;z++){
			if((i ==aa[z][0])&&(0 == aa[z][1])){
				flag = false;
				break;
			}
		}
		if(flag == true){
			dp[i][0] = 1;
		}
		else{
			for(int j = i;j<=max(x,y);j++){
				dp[j][0] = 0;
			}
			break;
		}
		//cout << "zz"<<" "<<aa[5][0]<<" "<<aa[5][1]<<endl;
	}
	//cout << "zz"<<" "<<aa[5][0]<<" "<<aa[5][1]<<endl;
	dp[aa[8][0]][aa[8][1]] = 0;
	for(ll i = 1;i<=x;i++){
		for(ll j = 1;j<=y;j++){
			bool flag = true;
			for(ll z = 0;z<9;z++){
				if((i==aa[z][0])&&(j==aa[z][1])){
					flag = false;
					//cout << i<<" "<<j<<"z:"<<z<<" "<<aa[z][0]<<" "<<aa[z][1]<<endl;
					break;
				}
			}
			if(flag){
				dp[i][j] = dp[i][j-1]+dp[i-1][j];
				//cout <<i<<" "<<j<<" "<< dp[i][j]<<endl;
			}
		}
	}

	cout << dp[x][y];
	return 0;
}
