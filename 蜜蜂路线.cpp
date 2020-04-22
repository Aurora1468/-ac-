#include<bits/stdc++.h>
using namespace std;

string jf(string a,string b){
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int len_a = a.length();
	int len_b = b.length();
	while(len_a != len_b){
		if(len_a<len_b){
			a = a + '0';
			len_a++; 
		}
		else{
			b = b + '0';
			len_b++; 
		}
	}
	string ret;
	int jingwei = 0;
	for(int i = 0;i<max(len_a,len_b);i++){
		int temp = ((a[i]-'0')+(b[i]-'0')+jingwei)/10;
		ret = ret + char(((a[i]-'0')+(b[i]-'0')+jingwei)%10 + '0');
		jingwei = temp;
	}
	if(jingwei!=0){
		ret = ret + char(jingwei+'0');
	}
	reverse(ret.begin(),ret.end());
	return ret;
}

int main(){
	int m,n;
	cin >> m>>n;
	int a = n-m + 1;
	string dp[1004];
	dp[1] = "1";
	dp[2] = "1";
	dp[3] = "2";
	for(int i = 3;i<=a;i++){
		dp[i] = jf(dp[i-1],dp[i-2]);
		//cout << i<<" "<<dp[i]<<endl; 
	}
	cout << dp[a];
	//cout << jf("624","456");
	return 0; 
}
