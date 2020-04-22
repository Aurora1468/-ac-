#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
using namespace std;

struct aa{
	int cd;
	int sl;
};

int zh(int a,int b){
	if(a == b){
		return 1;
	}
	int ret = 1;
	int c = a-b;
	int d = a;
	while(c--){
		ret = ret*d;
		d--;
	}
	return ret;
}

int main(){
	int r,c,k;
	cin >> r>>c>>k;
	string s[r];
	for(int i = 0;i<r;i++){
		cin >> s[i];
	}
	//int x = 0;
	int temp = 0;
	int sum = 0;
	for(int i = 0;i<r;i++){
		temp = 0;
		for(int j = 0;j<c;j++){
			if(s[i][j] == '.'){
				temp++;
			}
			//cout << temp<<endl;
			if((s[i][j] == '#')||(j == c-1)){
				if(temp>=k){
					//cout << temp;
					sum = sum + (temp-(k-1));
					//cout << i<<" "<<j<<" "<<sum<<endl;
				}
				temp = 0;
			}
		}
	}
	temp = 0;
	for(int i = 0;i<c;i++){
		temp = 0;
		for(int j = 0;j<r;j++){
			if(s[j][i] == '.'){
				temp++;
			}
			if((s[j][i] == '#')||(j == r-1)){
				if(temp>=k){
					sum = sum + (temp-(k-1));
					//cout << i<<" "<<j<<" "<<sum<<endl;
				}
				temp = 0;
			}
		}
	}
	if(k == 1){
		cout << sum/2;
		return 0;
	}
	cout << sum;
	return 0; 
}
