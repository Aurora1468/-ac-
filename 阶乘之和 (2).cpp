#include<bits/stdc++.h>
using namespace std;
string jiafa(string s1,string s2);
string chengfa(string a,string b){
	string temp,num;int q =0;
	int jingwei = 0;
	
	for(int i = b.length()-1;i>=0;i--){
		for(int x = a.length()-1;x>=0;x--){
			temp = char((int(a[x]-48)*int(b[i]-48)+jingwei)%10+48) + temp;
			jingwei = (int(a[x]-48)*int(b[i]-48)+jingwei)/10;
			if(x == 0&&jingwei!=0)
				temp = char(jingwei+48) + temp;
			//cout << temp<<endl;
		}
		//cout <<temp<<endl;
		
		for(int z = 0;z<q;z++){
			temp.append("0");
		}
		q++;
		//cout <<num<<" "<< temp<<endl;
		num = jiafa(num,temp);
		//cout << num<<endl;
		temp = "";
		jingwei = 0;
	}
	//cout << num;
	return num;
}

string jiafa(string s1,string s2){
	string a,b,temp;
	if(s1.length()>=s2.length()){
		a = s1;
		b = s2;
	}
	else{
		a = s2;
		b = s1;
	}
	int jingwei = 0;
	int x,y;
	for(x = a.length()-1,y = b.length()-1;x>=0,y>=0;x--,y--){
		temp = char((int(a[x]-48)+int(b[y]-48)+jingwei)%10+48) + temp;
			jingwei = (int(a[x]-48)+int(b[y]-48)+jingwei)/10;
			if((x == 0&&y == 0)&&jingwei!=0)
				temp = char(jingwei+48) + temp;
	}
	while(x>=0){
		temp = char((int(a[x]-48)+jingwei)%10+48) + temp;
		jingwei = (int(a[x]-48)+jingwei)/10;
		if(x == 0&&jingwei!=0)
			temp = char(jingwei + 48) + temp;
		x--;
	}	
	return temp;
}
int main(){
	int n;
	cin >> n;
	vector<string> nums;
	nums.push_back("1");
	nums.push_back("1");
	
	string num[51] = {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","32","33","34","35","36","37","38","39","40","41","42","43","44","45","46","47","48","49","50","51"};
	for(int i = 1;i<=n;i++)
		nums.push_back(chengfa(nums[i],num[i]));
	//cout << nums[n];
	string sc;
	for(int x = 1;x<=n;x++){
		sc = jiafa(sc,nums[x]);
	}
	cout << sc; 
}
