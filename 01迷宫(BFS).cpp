#include<bits/stdc++.h>
using namespace std;

struct dian{
	int x;
	int y;
};

int n,m;
int xx[] = {-1,1,0,0};
int yy[] = {0,0,-1,1};

int main(){
	cin >> n>>m;
	string fz[n];
	dian zuobiao[m+1];
	for(int i = 0;i<n;i++){
		cin >> fz[i];
	}
	int vis[n][n];
	//cout << fz[4][1]<<endl;
	for(int i = 0;i<m;i++){
		for(int a = 0;a<n;a++){
			for(int b = 0;b<n;b++)
				vis[a][b] = 0;
		}
		cin >> zuobiao[i].x >> zuobiao[i].y;
		zuobiao[i].x = zuobiao[i].x -1;
		zuobiao[i].y = zuobiao[i].y -1;
		ueue <dian> q;
		q.push(zuobiao[i]);
		int sum = 1;
		vis[zuobiao[i].x][zuobiao[i].y] = 1;
		while(!q.empty()){
			dian temp = q.front();
			for(int i = 0;i<4;i++){
				int dx = temp.x + xx[i];
				int dy = temp.y + yy[i];
				
				if(!vis[dx][dy]&&dx>=0&&dx<n&&dy>=0&&dy<n&&(fz[dx][dy]!=fz[temp.x][temp.y])){
					
					vis[dx][dy] = 1;
					dian temp2;
					temp2.x = dx;
					temp2.y = dy;
					q.push(temp2);
					sum++;
				}
			}
			q.pop();
		}
		//cout << endl;
		cout << sum<<endl;
	}
	
	return 0;
} 

//70·Ö 
