#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int sum = 0;
	for(int i = 1;i<=n;i++){
		char temp[500];
		sprintf(temp,"%d",i);
		string s;
		s.assign(temp,temp + strlen(temp));
		//cout << s;
		if(s.find('2')!=string::npos||s.find('0')!=string::npos||s.find('1')!=string::npos||s.find('9')!=string::npos){
			//cout << s<<endl;
			cout << i<<endl; 
			sum = sum + i; 
		}
	}
	cout << sum;
}
