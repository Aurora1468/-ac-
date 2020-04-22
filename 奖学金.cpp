#include<bits/stdc++.h>
using namespace std;
struct stu{
	int no;
	int yw;
	int math;
	int eng;
	int sum;
};

bool cmp(stu a,stu b){
	if(a.sum<b.sum){
		return true;
	}
	else if(a.sum == b.sum){
		if(a.yw < b.yw){
			return true;
		}
		else if(a.yw == b.yw){
			if(a.no > b.no){
				return true;
			}
		}
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	stu xs[n];
	for(int i = 1;i<=n;i++){
		xs[i-1].no = i;
		cin >> xs[i-1].yw >> xs[i-1].math>>xs[i-1].eng;
		xs[i-1].sum = xs[i-1].yw + xs[i-1].math + xs[i-1].eng;
	}
	sort(xs,xs + n,cmp);
	for(int i = n-1;i>=n-5;i--){
		cout << xs[i].no<<" "<<xs[i].sum<<endl;
	}
	return 0;
}
