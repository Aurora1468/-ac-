#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin >> a>>b;
	string c;
	int a_len = a.length();
	int b_len = b.length();
	if(a_len>b_len){
		for(int i = 0;i<a_len-b_len;i++){
			b = '0' + b;
		}
	}
	else{
		for(int i = 0;i<b_len-a_len;i++){
			a = '0' + a;
		}
	}
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int jingwei = 0;
	for(int i = 0;i<max(a_len,b_len);i++){
		int temp = (a[i]-'0' + b[i]-'0'+jingwei)/10;
		c = c + char(((a[i]-'0') + (b[i]-'0')+jingwei)%10 + '0');
		//cout << c<<endl;
		jingwei = temp;
		//cout << jingwei<<endl;
	}
	if(jingwei!=0){
		c = c + char(jingwei + '0');
	}
	reverse(c.begin(),c.end());
	cout << c;
	return 0;
}
