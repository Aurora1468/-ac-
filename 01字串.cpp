#include<bits/stdc++.h>
using namespace std;
int main(){
	for(int i = 0;i<32;i++){
		char temp[5];
		itoa(i,temp,2);
		string s;
		s.assign(temp,temp + strlen(temp));
		while(s.length()<5){
			s = '0' + s;
			
		}
		cout << s<<endl;
	}
	return 0;
} 
