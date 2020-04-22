#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<string> s;
	int cnt = 1;
	for(int i = 0;i<1719;i++){
		string temp;
		cin >> temp;
		s.push_back(temp);
	}
	for(int i = 0;i<1719;i++){
		if(count(s[i].begin(),s[i].end(),'4')==0){
			int sum = 0;
			for(int j = 0;j<s[i].length();j++){
				if(s[i][j]!='/'){
				//	cout << sum<<" ";
					sum = sum + (s[i][j]-48);
				}
			}
			//cout << endl;
			if(sum%8 == 0){
				cout << cnt <<" "<<sum<< " "<<s[i]<<endl;
				cnt++;
			}
				
		}
			

	}
	return 0;
}
