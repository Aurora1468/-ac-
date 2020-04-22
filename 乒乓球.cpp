#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	string temp;
	while(true){
		cin >> temp;
		if(temp.find('E')!=string::npos){
			s = s + temp.substr(0,temp.find('E')+1);
			break;
		}
		else
			s = s + temp;	
	}
	int A = 0,B = 0,A1 = 0,B1 = 0;
	for(int i = 0;i<s.length();i++){
		if(s[i] == 'W'){
			A++;
			if(A == 11&&A-B>=2){
				cout << A <<":"<<B<<endl;
				A = 0,B = 0;
			}
		}
		else if(s[i] == 'L'){
			B++;
			if(B == 11&&B-A>=2){
				cout << A<<":"<<B<<endl;
				A = 0,B = 0; 
			}
		}
		else if(s[i] == 'E'){
			cout << A<<":"<<B<<endl<<endl;
			A = 0,B = 0;
			break;
		}
	}
	for(int i = 0;i<s.length();i++){
		if(s[i] == 'W'){
			A1++;
			if(A1 == 21&&A1-B1>=2){
				cout << A1 <<":"<<B1<<endl;
				A1 = 0,B1 = 0;
			}
		}
		else if(s[i] == 'L'){
			B1++;
			if(B1 == 21&&B1-A1>=2){
				cout << A1<<":"<<B1<<endl;
				A1 = 0,B1 = 0; 
			}
		}
		else if(s[i] == 'E'){
			cout << A1<<":"<<B1;
			A1 = 0,B1 = 0;
			break;
		}
	}
	return 0;
}
 
