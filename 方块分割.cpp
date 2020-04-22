#include<bits/stdc++.h>
using namespace std;
int sum = 0;
int fz[7][7] = {0};
int xx1[4] = {1,-1,0,0};
int yy1[4] = {0,0,-1,1};

int vis[7][7] = {0};
void dfs(int x,int y){
	//cout << x<<" "<<y<<endl;
	if(x == 0||y == 0||x == 6||y == 6){
		sum++;
		/*for(int i = 0;i<7;i++){
			for(int j = 0;j<7;j++){
				cout << vis[i][j]<<" ";
			}
			cout << endl;
		}
		cout << endl;*/
		return;
	}
	for(int i = 0;i<4;i++){
		int dx1 = x + xx1[i];
		int dy1 = y + yy1[i];

		if(!vis[dx1][dy1]&&!vis[6-dx1][6-dy1]){
			vis[dx1][dy1] = 1;
			vis[6-dx1][6-dy1] = 1;
			dfs(dx1,dy1);
			vis[dx1][dy1] = 0;
			vis[6-dx1][6-dy1] = 0;
		}
	}
}
int main(){
	vis[3][3] = 1;
	dfs(3,3);
	cout << sum/4;
}
