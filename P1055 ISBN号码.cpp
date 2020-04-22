#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin >> s;
	int a = ((s[0]-48)*1 + (s[2]-48)*2 + (s[3]-48)*3 + (s[4]-48)*4 + (s[6]-48)*5 + (s[7]-48) *6 + (s[8]-48)*7 + (s[9]-48)*8 + (s[10]-48)*9)%11;
	if(a+48 == s[12]||(a == 10&&s[12] == 'X'))
		cout << "Right";
	else if(a == 10){
		s[12] = 'X';
		cout << s;
	}
		
	else {
		s[12] = a+48;
		cout << s;
	}
	return 0;
}
