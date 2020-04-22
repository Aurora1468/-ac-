#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n>30||n<10){
		cout << 0;
		return 0;
	}
	if(n == 30){
		cout << 1<<endl;
		cout << "3 3 3 3 3 3 3 3 3 3";
		return 0;
	}
	vector<int> num(10,0);
	for(int i = 9;i>=0;i--)
		for(int x = 1;x<=3;x++){
			num[i] = x;
			if((num[0]+num[1]+num[2]+num[3]+num[4]+num[5]+num[6]+num[7]+num[8]+num[9])==n){
				for(int z = 0;z<9;z++)
					cout << num[z] << " ";
				cout <<num[9]<<endl;
				for(int temp = 0;temp<10;temp++)
					num[temp] = 1;
			}
	}
}
