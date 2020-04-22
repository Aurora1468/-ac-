#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

struct a{
	int num;
	int no;
};

bool cmp(a a1,a b1){
	if(a1.num<b1.num)
		return true;
	else{
		return false;
	}
}

int main(){
	int n;
	cin >> n;
	a ret[n];
	for(int i = 0;i<n;++i){
		scanf("%d",&ret[i].num);
		ret[i].no = i+1;
	}
	sort(ret,ret+n,cmp);
	int q;
	cin >> q;
	int temp;
	for(int i = 0;i<q;++i){
		scanf("%d",&temp);
		bool flag = true;
		int l = 0,r = n;
		while(l<=r){
			int mid = (l+r)/2;
			//cout <<"mid "<< mid<<" "<<ret[mid].num<<endl;
			if(ret[mid].num == temp){
				printf("%d\n",ret[mid].no);
				flag = false;
				break;
			}
			else if(ret[mid].num > temp){
				r = mid - 1;
			}
			else{
				l = mid + 1;
			}
		}
		if(flag){
			printf("0\n");
		}
	}
	return 0;
}
