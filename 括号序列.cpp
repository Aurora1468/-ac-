#include<bits/stdc++.h>
using namespace std;
typedef long long ll;  

int main(){  
	string s = "";
	cin >> s;
	int s_len = s.length();
	int vis[s_len] = {0};
	if(s_len == 0){
		cout << "";
		return 0;
	} 
	for(int i = 0;i<s_len;i++){
		if(s[i] == ')'){
			for(int j = i-1;j>=0;j--){
				if(!vis[j]&&s[j] == '('){
					vis[j] = 1;
					vis[i] = 1;
					break;
				}
				else if (s[j] == '[' && vis[j] == 0) break;
			}
		}
		if(s[i] == ']'){
			for(int j = i;j>=0;j--){
				if(!vis[j]&&s[j] == '['){
					vis[j] = 1;
					vis[i] = 1;
					break;
				}
				else if (s[j] == '(' && vis[j] == 0) break;
			}
		}
	}
	for(int i = 0;i<s_len;i++){
		if((s[i] == ')'||s[i] == '(')&&!vis[i]){
			cout << "()";
			
		}
		else if((s[i] == ']'||s[i] == '[')&&!vis[i]){
			cout << "[]";
		}
		else{
			cout << s[i];
		}
	}
	//cout << s;
	return 0;
}





