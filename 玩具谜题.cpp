#include<bits/stdc++.h>
using namespace std;

struct xiaoren{
	int chaoxiang;
	string zhiye;
};
struct zhiling{
	int lr;
	int lr_num;
};

int main(){
	int n,m,xx = 0;
	cin >> n >> m; 
	struct xiaoren x[n];
	struct zhiling z[m];
	for(int i = 0;i<n;i++){
		cin >> x[i].chaoxiang>>x[i].zhiye;
	}
	for(int i = 0;i<m;i++){
		cin >> z[i].lr>>z[i].lr_num;
	}
	for(int i = 0;i<m;i++){
		if(z[i].lr == 0){
			if(x[xx].chaoxiang == 1)
				xx = (xx + z[i].lr_num)%n;
			else if(x[xx].chaoxiang == 0){
				xx = (xx - z[i].lr_num);
				
				if(xx<0)
					xx = n + xx;
				xx = xx%n;
			}
		}
		else if(z[i].lr == 1){
			if(x[xx].chaoxiang == 1){
				xx = (xx - z[i].lr_num);
				if(xx<0)
					xx = n + xx;
				xx%n;
			}
			else if(x[xx].chaoxiang == 0)
				xx = (xx + z[i].lr_num)%n;;
		}	
	}
	cout << x[xx].zhiye; 
	return 0;
} 
