#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int num[5000002] = {0}; 

int main(){  
	int n;
	cin >> n;
	for(int i = 0;i<n;i++){
		int temp;
		scanf("%d",&temp);
		num[temp]++;
	}
	for(int i = 0;i<5000002;){
		if(num[i]){
			printf("%d ",i);
			num[i]--;
		}
		else
			i++;
	}
	return 0;
}
