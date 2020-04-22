#include<bits/stdc++.h>
using namespace std;


int main()
{
	int num[10][32];

	for(int i = 0;i<10;i++){
		for(int j = 0;j<32;j++){
			cin >> num[i][j];
			//cout << i<<" "<<j<<" "<<num[i][j]<<endl;
		}
	}
	int temp = 0;
	string s;
	for(int i = 0;i<10;i++){
		for(int j = 0;j<32;j++){
			if(temp == 2){
				for(int i= 0;i<s.length();i++){
					if(s[i] == '1')
						cout << '#';
					else
						cout << '.';
				}
				cout << endl;
				temp = 0;
				s = "";
			}
			bitset<8> aa(num[i][j]);
			s = s + aa.to_string();
			temp++;
		}
		cout << endl;
	}
	return 0;
}
