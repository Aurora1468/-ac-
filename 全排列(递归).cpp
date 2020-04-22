#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int quanpailie(int n,int *a,int cut){
	if(cut == n){
		for(int i = 0;i<n;i++)
			cout << a[i];
		cout << endl;
	}
	else
		for(int i = 1;i<=n;i++){
			bool ok = true;
			for(int x = 0;x<cut;x++){
				if(a[x] == i)
					ok = !ok;
			}
			if(ok){
				a[cut] = i;
				quanpailie(n,a,cut+1);
			}
		}
}
int main(){
	int n;
	cin >> n;int a[10];
	int cut = 0;
	quanpailie(n,a,cut);
}
