#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main(){
	string s[26];
	s[0] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	for(int i = 1;i<26;i++){
		s[i] = s[i-1];
		char a = s[i][0];
		s[i].erase(0,1);
		s[i] += a;
	}
	string a,b;
	cin >> a>>b;
	int cnt = 0;
	for(int i = 0;i<b.length();++i){
		char temp = b[i];
		char temp2 = a[cnt];
		if(temp2>='a'&&temp2<='z'){
			temp2 = a[cnt] - 32;
		}
		if(temp>='a'&&temp<='z'){
			temp -= 32;
			//cout << temp<<" "<<temp2<<endl;
			int hang = (temp - temp2 + 26)%26;
			//cout << hang<<endl;
			cout << char(hang + 'a');
		}
		else{
			int hang = (temp - temp2 + 26)%26;
			cout << char(hang + 'A');
		}
		cnt++;
		if(cnt == a.length()){
			cnt = 0;
		}
	}
	return 0;
}
