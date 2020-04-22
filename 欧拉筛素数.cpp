#include<bits/stdc++.h>
using namespace std;
typedef long long LL;  
bool ss[100000004];
int prime[5000006],cnt = 0;

int main(){  
	int n,q;
	cin >> n>>q;
	memset(ss,1,sizeof(ss));
	ss[1] = false;
	for(int i = 2;i<=n;i++){
		if(ss[i]){
			prime[++cnt] = i;
		}
        for(int j = 1;j<=cnt && prime[j]*i<=n;j++){
            
			ss[prime[j]*i] = 0;

            if(i%prime[j]==0)
                break;
        }
	} 
    int a;
	for(int i = 0;i<q;++i){
		scanf("%d",&a);
		printf("%d\n",prime[a]);
	} 
	return 0;
}


