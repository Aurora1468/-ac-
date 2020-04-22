#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >> s;
	if(s[0]!='-'){
		reverse(s.begin(),s.end());
		int i = 0;
		while(s[i] == '0'){
			s.erase(0,1);
		}
	}
	else{
		reverse(s.begin()+1,s.end());
		int i = 1;
		while(s[i] == '0'){
			s.erase(1,1);
		}
	}
	cout << s;
	return 0;
} 
