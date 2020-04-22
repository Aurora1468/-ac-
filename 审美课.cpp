#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,sum = 0;
	cin >> n>>m;
	int A[n][m];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++)
			cin >> A[i][j];
	} 
	for(int i = 0;i<n;i++){
		for(int j = i;j<n;j++){
			int flag = 0;
			for(int z = 0;z<m;z++){
				if(A[i][z]==A[j][z]){
					flag = 1;
					break;
				}
			}
			if(flag == 0){
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
} 
