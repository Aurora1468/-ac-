#include<bits/stdc++.h>
using namespace std;

struct cs{
	char yuanwen;
	char miwen;
};
int main(){
	string s1,s2,s3;
	cin >> s1>>s2>>s3;
	vector<cs> fy;
	for(int i = 0;i<s1.length();i++){
		cs temp;
		int flag = 0;
		temp.yuanwen = s2[i];
		temp.miwen = s1[i];
		for(int k = 0;k<fy.size();k++){
			if(temp.miwen == fy[k].miwen&&temp.yuanwen==fy[k].yuanwen){
				flag = 1;
				break;
			}
			else if(temp.miwen == fy[k].miwen&&temp.yuanwen!=fy[k].yuanwen){
				cout << "Failed"<<endl;
				return 0;
			}
			else if(temp.miwen != fy[k].miwen&&temp.yuanwen==fy[k].yuanwen){
				cout << "Failed"<<endl;
				return 0;
			}
			
		}
		if(flag == 0)
			fy.push_back(temp);
	}
	if(fy.size()<26){
		cout << "Failed"<<endl;
		return 0;
	}
	for(int i = 0;i<s3.length();i++){
		for(int j = 0;j<fy.size();j++){
			if(s3[i] == fy[j].miwen){
				cout << fy[j].yuanwen;
				break;
			}
		}
	}
	return 0;
} 








