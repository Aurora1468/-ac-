#include<bits/stdc++.h>
using namespace std;

struct ren{
	int no;
	int qz;
	int di;
};

bool cmp(ren a,ren b){
	if(a.qz<b.qz)
		return false;
	else if(a.qz == b.qz){
		if(a.no<b.no)
			return true;
		else
			return false;
	}
	return true;
}

int main(){
	int n,k;
	cin >> n>>k;
	int e[10];
	for(int i = 0;i<10;i++){
		cin >> e[i];
	}
	ren r[n];
	for(int i = 0;i<n;i++){
		r[i].no = i + 1;
		cin >> r[i].qz;
	}
	sort(r,r+n,cmp);
	for(int i = 0;i<n;i++){
		if(((i+1)%10==0)&&(i!=0))
			r[i].di = 10;
		else
			r[i].di = (i+1)%10;
		r[i].qz += e[r[i].di-1];
	}
	sort(r,r+n,cmp);
	for(int i = 0;i<k-1;i++){
		cout << r[i].no<<" ";
	}
	cout << r[k-1].no;
	return 0;
}
