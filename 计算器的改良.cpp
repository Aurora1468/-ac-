#include<bits/stdc++.h>
using namespace std;
int main(){
	string s = "";
	cin >> s;
	char a;
	string s1 = "";
	for(int i = 0;i<s.length();i++){
		cout << s[i];
		if(s[i]>='a'&&s[i]<='z'){
			//cout << s[i];
			a = s[i];
		}
	}
	cout << a;	
	while(s.find(a)!=string::npos){
		if(s.find(a) == 0)
			s1 = s1 + a;
		else{
			int x = s.find(a);
			while(x>0){
				//cout <<s[x]<<endl;
				if(s[x] == '+'){
					s1 = s1 + '+' + s.substr(x+1,s.find(a));
					s.erase(x,s.find(a));
					break;
				}
				else if(s[x] == '-'||s[x] == '='){
					s1 = s1 + '-' + s.substr(x+1,s.find(a));
					s.erase(x,s.find(a));
					break;
				}
				x--;
			}
		}
	}
	cout << s1;
} 
