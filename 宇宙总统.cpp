#include<bits/stdc++.h>
using namespace std;
string s[30];

bool cmp(string a,string b){
	if(a.length()<b.length())
		return true;
	else if(a.length() == b.length()){
		int x = 0;
		while(x<a.length()){
			if(a[x]<b[x]){
				return true;
			}
			else if(a[x]>b[x]){
				return false;
			}
			x++;
		}
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	string s2[n];
	for(int i = 0;i<n;i++){
		cin >> s[i];
		s2[i] = s[i];
	}
	sort(s,s + n,cmp);
	/*for(int i = 0;i<n;i++){
		cout << s[i]<<endl;
	}*/
	cout <<find(s2,s2 + n,s[n-1]) - s2 + 1<<endl<< s[n-1]<<endl;
	return 0;
}
