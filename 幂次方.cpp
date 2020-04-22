#include<bits/stdc++.h>
using namespace std;
string s;

int ksm(int a,int b){
	int ret = 1;
	while(b>0){
		if(b&1){
			ret = ret * a;
		}
		a = a*a;
		b = b>>1;
	}
	return ret;
}

void digui(int x){
	if(x == 0)
		return;
	int y;
	for(int i = 0;i<10000;i++){
		if(ksm(2,i+1)>x){
				y = i;
				break;
		}
	}
	if(y == 0){
		cout << "2(0)";
	}
	if(y == 1)
		cout << "2";
	if(y>1){
		cout << "2(";
		digui(y);
		cout << ")";
	}
	if(x!=ksm(2,y)){
		cout << "+";
		digui(x-ksm(2,y));
	}
}


int main(){
	int n;
	cin >> n;
	digui(n);
	cout << s;
  return 0;
}
