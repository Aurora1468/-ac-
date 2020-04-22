#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	if(s.find('.')!=string::npos){
		int dian = s.find('.');
		reverse(s.begin(),s.begin() + dian);
		while(s.substr(0,1)=="0"){
			s.erase(0,1);
		}
		if(s[0] == '.')
			s = '0' + s;
		dian = s.find('.');
		while(s.substr(s.length()-1,1)=="0"){
			s.erase(s.length()-1,1);
		}
		reverse(s.begin() + dian + 1,s.end());
		while(s.substr(s.length()-1,1) == "0"){
			s.erase(s.length()-1,1);
		}
		if(s[s.length()-1] == '.')
			s = s + '0';
		cout << s;
	}
	else if(s.find('/')!=string::npos){
		int dian = s.find('/');
		reverse(s.begin(),s.begin() + dian);
		while(s.substr(0,1)=="0"){
			s.erase(0,1);
		}
		dian = s.find('/');
		while(s.substr(s.length()-1,1)=="0"){
			s.erase(s.length()-1,1);
		}
		reverse(s.begin() + dian + 1,s.end());
		if(s[0] == '/')
			s = '0' + s;
		cout << s;
	}
	else if(s.find('%')!=string::npos){
		reverse(s.begin(),s.end()-1);
		while(s.substr(0,1)=="0"){
			s.erase(0,1);
		}
		if(s[0] == '%')
			s = '0' + s;
		cout << s;
	}
	else{
		
		reverse(s.begin(),s.end());
		while(s.substr(0,1)=="0"){
			s.erase(0,1);
		}
		if(s.length() == 0)
			s = '0';
		cout << s;
	}
	return 0;
} 
