#include<bits/stdc++.h>
using namespace std;

int n;
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
		temp = char((int(a[x]-48)+int(b[y]-48)+jingwei)%n+48) + temp;
		jingwei = (int(a[x]-48)+int(b[y]-48)+jingwei)/n;
		if((x == 0&&y == 0)&&jingwei!=0)
			temp = char(jingwei+48) + temp;
	}
	while(x>=0){
		temp = char((int(a[x]-48)+jingwei)%n+48) + temp;
		jingwei = (int(a[x]-48)+jingwei)/n;
		if(x == 0&&jingwei!=0)
			temp = char(jingwei + 48) + temp;
		x--;
	}	
	return temp;
}

int main(){
	cin >> n;
	string m;
	cin >> m;
	string temp;
	temp = m;
	string temp1;
	for(int i = 0;i<=30;i++){
		temp1 = temp;
		reverse(temp.begin(),temp.end());
		if(temp == temp1){
			cout << "STEP="<<i;
			return 0;
		}
		temp = jiafa(temp1,temp);
	} 
	cout << "Impossible!";
}
