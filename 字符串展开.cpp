#include<bits/stdc++.h>
using namespace std;
int p1,p2,p3;
string s;

void kuozhan(char a,char b,char c){
	string temp;
	if(p1 == 1){
		char aa = a + 1;
		while(aa<c){
			temp = temp + aa;
			aa++;
		}
	}
	else if(p1 == 2){
		if(a>='0'&&a<='9')
			temp = temp + char(int(a)+1);
		else{
			char aa = a - 32 + 1;
			while(aa<(c-32)){
				temp = temp + aa;
				aa++;
			}
		}
	}
	else if(p1 == 3){
		char aa = a + 1;
		while(aa<c){
			temp = temp + '*';
			aa++;
		}
	}
	string temp2 = temp;
	for(int i = 1;i<p2;i++){
		temp = temp + temp2;
	}
	//cout << temp<<endl;
	sort(temp.begin(),temp.end());
	if(p3 == 2)
		reverse(temp.begin(),temp.end());
	s = s + temp;
}

int main(){
	cin >> p1>>p2>>p3;
	string a;
	cin >> a;
	for(int i = 0;i<a.length();i++){
		//s = s + a[i];
		//cout << a[i]<<endl;
		/*if(a[i] == '-')
			;*/
		if(a[i+1] == '-'&&a[i]>=a[i+2]){
			s = s + a[i] + '-';
			i = i + 1;
		}
		else if(a[i+1] == '-'&&((a[i+2]-a[i]) == 1)){
			s = s + a[i];
			i = i + 1;
		}
		else if(a[i+1] == '-'&&a[i]<a[i+2]){
			if((a[i]>='0'&&a[i]<='9'&&a[i+2]>='0'&&a[i+2]<='9')||
				 (a[i]>='a'&&a[i]<='z'&&a[i+2]>='a'&&a[i+2]<='z')){
					 s = s + a[i];
					 kuozhan(a[i],'-',a[i+2]);
					 i = i + 1;
			}
			else{
				s = s + a[i];
			}
		}
		else
			s = s + a[i];
		//cout << s<<endl;
	}
	cout << s;
	return 0;
}
//90分
