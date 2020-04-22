#include<bits/stdc++.h>
using namespace std;

string fz(string ss){
	for(int i = 0;i<ss.length();i++){
		if(ss[i] == '6')
			ss[i] = '9';
		else if(ss[i] == '9')
			ss[i] = '6';
	}
	return ss;
}

bool pd(string ss){
	string temp_ss = ss;
	if(count(ss.begin(),ss.end(),'2')!=0||
	   count(ss.begin(),ss.end(),'3')!=0||
	   count(ss.begin(),ss.end(),'4')!=0||
	   count(ss.begin(),ss.end(),'5')!=0||
	   count(ss.begin(),ss.end(),'7')!=0)
	   return false;
	reverse(ss.begin(),ss.end());
	
	if(temp_ss == fz(ss)){
		//cout<<1<<" "<<temp_ss<<" "<<fz(ss)<<endl;
		return true;
	}
	return false;
}

int main(){
	int sum = 0;
	for(int i = 0;i<=999999;i++){
		char temp[8];
		sprintf(temp,"%d",i);
		string temp2;
		temp2.assign(temp,temp + strlen(temp));
		while(temp2.length()!=6){
			temp2 = "0" + temp2;
		}
		
		if(pd(temp2)){
			cout << temp2<<endl;
			sum++;
		}
	}
	cout << sum;
	return 0;
} 
