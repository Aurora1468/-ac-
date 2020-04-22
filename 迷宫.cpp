#include<bits/stdc++.h>
using namespace std;

int n,m;
int sx,sy,fx,fy;
int cnt = 0;
int mg[6][6] = {0};
int vis[6][6] = {0};
void dfs(int x,int y){
	//cout <<x<<" "<<y<<" "<<mg[x][y]<<endl;
	if(x == fx&&y == fy){
		cnt++;
		return;
	}
	/*for(int a = x;x<=n;x++){
		
	}*/
	
	//ÃÔ¹¬ÎÊÌâ¿¼ÂÇ±ß½ç 
	if(mg[x][y+1]!=-1&&y<=m-1&&x<=n&&!vis[x][y+1]){
		vis[x][y+1] = 1;
		dfs(x,y+1);
		vis[x][y+1] = 0;
	}
	 if(mg[x+1][y]!=-1&&y<=m&&x<=n-1&&!vis[x+1][y]){
		vis[x+1][y] = 1;
		dfs(x+1,y);
		vis[x+1][y] = 0;
	}
	 if(mg[x-1][y]!=-1&&y<=m&&x>1&&!vis[x-1][y]){
		vis[x-1][y] = 1;
		dfs(x-1,y);
		vis[x-1][y] = 0;
	}
	 if(mg[x][y-1]!=-1&&y>1&&x<=n&&!vis[x][y-1]){
		vis[x][y-1] = 1;
		dfs(x,y-1);
		vis[x][y-1] = 0;
	}
	
}

int main(){
	int t;
	cin >> n >> m >> t;
	
	cin >> sx >> sy >> fx >> fy;
	for(int i = 0;i<t;i++){
		int tx,ty;
		cin >> tx>>ty;
		mg[tx][ty] = -1;
	} 
	for(int i = 0;i<m;i++){
		mg[i][0] = -1;
		mg[0][i] = -1;
	}
	
	vis[sx][sy] = 1;
	dfs(sx,sy);
	cout << cnt;
}
 
 
//ÃÔ¹¬ÎÊÌâ¿¼ÂÇ±ß½ç 
