#include<bits/stdc++.h>
using namespace std;
struct ren{
	int num;
	int no;
};

bool cmp(ren a,ren b){
	if(a.num<b.num){
		return true;
	}
	else if(a.num == b.num){
		if(a.no<b.no){
			return true;
		}
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	ren s[n];
	for(int i = 0;i<n;i++){
		cin >> s[i].num;
		s[i].no = i+1;
	}
	sort(s,s+n,cmp);
	double sum = 0;
	double temp = 0;
	cout << s[0].no<<" ";
	for(int i = 1;i<n;i++){
		cout << s[i].no<<" ";
		temp = temp + s[i-1].num;
		sum = sum + temp;
	}
	printf("\n%.2lf",sum/n);
}
