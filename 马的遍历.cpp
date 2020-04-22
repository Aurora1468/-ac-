#include<bits/stdc++.h>
using namespace std;

struct dian{
	int x;
	int y;
};
int n,m,cx,cy;
int xx[] = {-2,-1,1,2,2,1,-1,-2};
int yy[] = {1,2,2,1,-1,-2,-2,-1};
int vis[500][500] = {0};
int main(){
	cin >> n >> m >> cx >> cy;
	int qipan[n][m];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			qipan[i][j] = 999999;
		}
	}
	qipan[cx-1][cy-1] = 0;
	dian zuobiao;
	zuobiao.x = cx-1;zuobiao.y = cy-1;
	queue <dian> q;
	q.push(zuobiao);
	while(!q.empty()){
		dian temp = q.front();
		for(int i = 0;i<8;i++){
			int dx = temp.x + xx[i];
			int dy = temp.y + yy[i];
			if(!vis[dx][dy]&&dx>=0&&dx<n&&dy>=0&&dy<m){
				dian temp2;
				temp2.x = dx;
				temp2.y = dy;
				vis[dx][dy] = 1;
				q.push(temp2);
				qipan[dx][dy] = min(qipan[temp.x][temp.y] + 1,qipan[dx][dy]);
				
			}
		}
		q.pop();
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(qipan[i][j] == 999999){
				printf("%-5d",-1);
			}
			else{
				printf("%-5d",qipan[i][j]);
			}
		}
		cout <<endl;
	}
	return 0;
} 
