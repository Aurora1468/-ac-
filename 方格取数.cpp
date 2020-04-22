#include<bits/stdc++.h>
using namespace std;

int max_sum = 0;
void dfs(int x,int y,int sum){
	max_sum = max()
}


int main(){
	int n;
	cin >> n;
	int fz[n+1][n+1] = {0};
	while(true){
		int temp1,temp2,temp3;
		cin >> temp1>>temp2>>temp3;
		if(temp1 ==0&&temp2==0&&temp3 == 0)
			break;
		fz[temp1][temp2] = temp3;
	}
	for(int i = 0;i<n+1;i++){
		fz[0][i] = -1;
		fz[i][0] = -1;
	} 
	/*for(int i = 0;i<n+1;i++) {
		for(int x = 0;x<n+1;x++)
			cout << fz[i][x]<<" ";
		cout << endl;
	}*/
	dfs(0,1,0);		
} 
