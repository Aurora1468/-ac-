#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin>>a>>b;
	int c[50000] = {0};
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int c_len = -1;
	for(int i = 0;i<int(a.length());i++){
		for(int j = 0;j<int(b.length());j++){
			c[i+j] += (a[i]-'0')*(b[j]-'0');
			c_len = max(c_len,i+j);
		}
	}
	cout << endl;
	int jingwei = 0;
	for(int i = 0;i<=c_len;i++){
		int temp = (c[i] + jingwei)/10;
		c[i] = (c[i] + jingwei)%10;
		jingwei = temp;
	}
	if(jingwei!=0){
		c[c_len + 1] = jingwei;
		c_len++;
	}
	for(int i = c_len;i>=0;i--){
		cout << c[i];
	}
	cout << endl;
	return 0;
}
