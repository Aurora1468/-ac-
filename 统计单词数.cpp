#include<bits/stdc++.h>
using namespace std;

string bianxiao(string s){
	for(int i = 0;i<s.length();i++){
		if(s[i]>='A'&&s[i]<='Z')
			s[i] = char(s[i] + 32);
	}
	return s;
}

int main(){
	string s,temp;
	getline(cin,s);
	s = bianxiao(s);
	int flag = -1;
	getline(cin,temp);
	temp = bianxiao(temp);
	int cnt = 0,first;
	while(temp.find(s)!=string::npos){
		int x = temp.find(s);
		//cout << x<<endl;
		cout << temp<<endl;
		if(cnt == 0)
			first = x;
		if((temp[x-1]!=' '&&x!=0)||(temp[x+s.length()]!=' '&&(x+s.length()<temp.length()))){//&&x+s.length()!={
			cout <<temp;
			temp = temp.erase(0,temp.find(s)+1);
			continue;	
		}
		/*if(x!=0||(x+s.length()-1 == temp.length())){
			temp = temp.erase(0,temp.find(s)+1);
			continue;
		}*/
		temp = temp.erase(0,temp.find(s)+1);
		flag = 1;
		cnt++;
	}
	if(flag == -1)
		cout << flag;
	else
		cout << cnt<<" "<<first;
	return 0;
}

//50
