#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main(){
	string s;
	cin >> s;
	long long t;
	cin >> t;
	long long x = 0,y = 0;
	long long temp = 0;
	for(long long i = 0;i<s.size();i++){
		if(s[i] == 'E'){
			x+=1;
			//temp++;
		}
		else if(s[i] == 'S'){
			y-=1;
		}
		else if(s[i] == 'W'){
			x-=1;
		}
		else if(s[i] == 'N'){
			y+=1;
		}
	}
	x = x*(t/s.size());
	y = y*(t/s.size());
	for(long long i = 0;i<(t%s.size());i++){
		if(s[i] == 'E'){
			x+=1;
			//temp++;
		}
		else if(s[i] == 'S'){
			y-=1;
		}
		else if(s[i] == 'W'){
			x-=1;
		}
		else if(s[i] == 'N'){
			y+=1;
		}
	}
	cout <<x<<" "<<y;
	return 0; 
}
