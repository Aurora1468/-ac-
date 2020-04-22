#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	string temp,s;
	cin >> temp;
	int changdu = temp.size(),a;
	//cout << changdu;
	a = changdu;
	s = s + temp;
	while(changdu-1>0){
		cin >> temp;
		s = s + temp;
		changdu--;
	}
	int jishu0 = 0,jishu1 = 0;
	cout << a<<" ";
	if(s[0]=='1')
		cout << 0 << " ";
	for(int i = 0;i<s.size();i++){
		if(s[i]== '0'){
			jishu0++;
			if(jishu1!=0){
				cout << jishu1<<" ";
				jishu1 = 0;
			}
		}
		else if(s[i] == '1'){
			jishu1++;
			if(jishu0!=0){
				cout << jishu0<<" ";
				jishu0 = 0;
			}
		}
	}
	if(jishu0!=0)
		cout << jishu0;
	if(jishu1!=0)
		cout << jishu1;
} 
