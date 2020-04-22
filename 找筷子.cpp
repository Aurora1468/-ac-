#include<bits/stdc++.h>
using namespace std;
typedef long long ll;  

bool a[1000000002];
int l;
int main(){  
	int n;
	scanf("%d",&n);
	int temp;
	for(int i = 0;i<n;++i){
		scanf("%d",&temp);
		if(a[temp]){
			l = l - temp;
			a[temp] = 0;
		}
		else{
			l = l + temp;
			a[temp] = 1;
		}
	}
	printf("%d",l);
	return 0;
}
//++i比i++快很多 

