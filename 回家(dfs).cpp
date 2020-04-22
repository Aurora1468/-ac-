#include<bits/stdc++.h>
using namespace std;

int n,m;
int fz[10][10];
int xx[] = {-1,1,0,0};
int yy[] = {0,0,-1,1};
int qidian_x;
int qidian_y;
int zhongdian_x;
int zhongdian_y;
int min_time = 9999999;
int vis[10][10];
void dfs(int x,int y,int xueliang,int temp_time){
	if(xueliang == 0||temp_time >m*n||temp_time>min_time)
		return;
	if(x == zhongdian_x&&y == zhongdian_y&&xueliang!=0){
		min_time = min(min_time,temp_time);
		return;
	}
	if(fz[x][y] == 4){
		xueliang = 6;
	}
	for(int i = 0;i<4;i++){
		int dx = x + xx[i];
		int dy = y + yy[i];
		if(/*!vis[dx][dy]&&*/dx>=1&&dx<=n&&dy>=1&&dy<=m&&fz[dx][dy]!=0){
			//vis[dx][dy] = 1;
			dfs(dx,dy,xueliang - 1,temp_time + 1);
			//vis[dx][dy] = 0;
		}
	}
}


int main(){
	cin >> n>> m;
	if(n == m&&n == 1){
		cout << 0;
		return 0;
	}
	for(int i = 1;i<=n;i++){
	 	for(int j = 1;j<=m;j++){
	 		cin >> fz[i][j];
	 		if(fz[i][j] == 2){
	 			qidian_x = i;
	 			qidian_y = j;
			}
			else if(fz[i][j] == 3){
				zhongdian_x = i;
				zhongdian_y = j;
			}
		}
	}
	dfs(qidian_x,qidian_y,6,0);
	if(min_time!=9999999)
		cout << min_time;
	else 
		cout << -1;
	return 0;
}
