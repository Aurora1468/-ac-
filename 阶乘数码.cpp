#include<bits/stdc++.h>
using namespace std;

string cf(string a,string b){
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int ret[10000] = {0};
	for(int i = 0;i<a.length();i++){
		for(int j = 0;j<b.length();j++){
			ret[i+j] = ret[i+j] + (a[i]-'0')*(b[j]-'0');
		}
	}
	int leng = a.length()-1+b.length()-1;
	int jingwei = 0;
	for(int i = 0;i<=leng;i++){
		//cout << ret[i]<<" ";
		int temp = (ret[i] + jingwei)/10;
		ret[i] = (ret[i] + jingwei)%10;
		jingwei = temp;
	}
	if(jingwei!=0){
		leng++;
		ret[leng] = jingwei;
	}
	string ret2;
	for(int i = 0;i<=leng;i++){
		ret2 = ret2 + char(ret[i]+'0');
	}
	reverse(ret2.begin(),ret2.end());
	return ret2;
}

string jc(int n){
	string ret = "1";
	for(int i = 1;i<=n;i++){
		char temp[5];
		sprintf(temp,"%d",i);
		string temps;
		temps.assign(temp,temp + strlen(temp));
		ret = cf(ret,temps);
	}
	return ret;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n,a;
		cin >> n>>a;
		string s = jc(n);
		char temp = a + '0';
		cout << count(s.begin(),s.end(),temp)<<endl;
	}
	//cout << cf("1230","456");
	return 0;
}
