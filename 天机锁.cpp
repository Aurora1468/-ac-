#include<bits/stdc++.h>
using namespace std;

bool pd(string ss){
	if(count(ss.begin(),ss.end(),'9')!=count(ss.begin(),ss.end(),'4'))
		return false;
	if(count(ss.begin(),ss.end(),'2') == 0)
		return false;
	int sum = 0;
	for(int i = 0;i<ss.length();i++){
		sum = sum + (ss[i]-48);
	}
	if(sum > 52)
		return false;
	//cout << sum<<" ";
	return true;
}

int main(){
	long long cnt = 0;
	int cc = 0;
	for(int i = 0;i<=99999999;i++){
		char temp[15];
		sprintf(temp,"%d",i);
		string temp2;
		temp2.assign(temp,temp + strlen(temp));
		while(temp2.length()!=8){
			temp2 = "0" + temp2;
		}
		if(pd(temp2)){
			cnt++;
			cc++;
			if(cc == 100000){
				cout <<cnt<<" "<< temp2<<endl;
				cc = 0;
			}
		}
	}
	cout << cnt;
	system("pause");
	return 0;
}
