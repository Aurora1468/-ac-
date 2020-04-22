#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	char zmb[26] = {'a','b','c','d',
	'e','f','g','h','i','j','k',
	'l','m','n','o','p','q','r',
	's','t','u','v','w','x','y','z'};
	for(int i = 0;i<s.length();i++){
		for(int j = 0;j<26;j++){
			if(s[i] == zmb[j]){
				cout << zmb[(j + n)%26];
				break;
			}
		}
	}
	return 0;
}
