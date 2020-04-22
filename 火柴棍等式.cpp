#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	n = n-4;
	int sum = 0;
	int hcg[10] = {6,2,5,5,4,5,6,3,7,6};
	int num[3009] = {0};
	for(int i = 0;i<3000;i++){
		char temp[5];
		sprintf(temp,"%d",i);
		for(int j = 0;j<strlen(temp);j++){
			num[i] = num[i] + hcg[int(temp[j]-'0')];
		}
	}
	for(int i = 0;i<=1000;i++){
		for(int j = 0;j<=1000;j++){
			if(num[i]+num[j] + num[i+j] == n){
				//cout<< i<<" "<<j<<" "<<i+j<<endl;
				sum++;
			}
		}
	}
	cout << sum;
}
