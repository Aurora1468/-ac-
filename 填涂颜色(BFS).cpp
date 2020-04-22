#include<bits/stdc++.h>
using namespace std;

int fz[40][40];
int n;
int vis[40][40];
int xx[] = {-1,1,0,0};
int yy[] = {0,0,-1,1};

struct dian{
	int x;
	int y;
};
void bfs(){
	dian zuobiao;
	zuobiao.x = 0;zuobiao.y = 0;
	queue <dian> q;
	q.push(zuobiao);
	vis[0][0] = 1;
	while(!q.empty()){
		for(int i = 0;i<4;i++){
			dian temp = q.front();
			temp.x = temp.x + xx[i];
			temp.y = temp.y + yy[i];
			if(!vis[temp.x][temp.y]&&fz[temp.x][temp.y]!=1&&temp.x>=0&&temp.x<=39&&temp.y>=0&&temp.y<=39){
				vis[temp.x][temp.y] = 1;
				q.push(temp);
			}
		}
		q.pop();
	}
}


int main(){
	cin >> n;
	for(int i = 1;i<=n;i++)
		for(int j = 1;j<=n;j++)
			cin >> fz[i][j];
	bfs();
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			if(!vis[i][j]&&fz[i][j] == 0)
				fz[i][j] = 2;
			cout << fz[i][j]<<" ";
			//cout << vis[i][j] << " ";
			
		}
		cout <<endl;
	}
	return 0;	
} 
