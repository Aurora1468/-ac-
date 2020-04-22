#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 


int main(){  
	int n,m;
	cin >> n>> m;
	int fs[n][m] = {0};
	int cc = 0;
	for(int i = 0;i<m;i++){
		int rs;
		cin >> rs;
		int num[rs];
		for(int aa = 0;aa<rs;aa++){
			cin >> num[aa];
		}
		sort(num,num+rs);
		if(num[0] == 1){
			for(int zz = 0;zz<rs;zz++){
				fs[num[zz]-1][i] = 1;
			}
		
			cc++;
		}
		else{
			int tg[m] = {0};
			for(int aa = 0;aa<rs;aa++){
				for(int qq = 0;qq<m;qq++){
					if(fs[num[aa]-1][qq]!=0){
						tg[qq] = 1;
					}
				}
			}
			for(int aa = 0;aa<rs;aa++){
				for(int qq = 0;qq<m;qq++){
					if(tg[qq]==1){
						fs[num[aa]-1][qq] = 1;
					}
				}
			}
			
		}
	}
	//cout << cc<<endl;
	
	
	for(int i = 0;i<n;i++){
		int sum = 0;
		for(int j = 0;j<m;j++){
			if(fs[i][j] == 1){
				sum++;
				//cout <<i<<" "<< sum<<endl;
				if(sum == cc){
					cout << i+1<<endl;
				}
			}
		}
	}
	return 0;
}
