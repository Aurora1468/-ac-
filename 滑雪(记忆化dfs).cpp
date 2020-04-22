#include<bits/stdc++.h>
using namespace std;
int hx[130][130];
int jyh[130][130] = {0};
int max_cd = 0;
int xx[4] = {-1,1,0,0};
int yy[4] = {0,0,-1,1};
int n,m;
int dfs(int x,int y){
	//cout << x<<" "<<y<<" "<<cd<<endl;
	if(jyh[x][y]){
		//max_cd = max(max_cd,jyh[x][y]);
		return jyh[x][y];
	}
	jyh[x][y] = 1;
	//bool flag = true;
	//int max2 = 0;
	for(int a = 0;a<4;a++){
		int dx = x + xx[a];
		int dy = y + yy[a];
		if(dx>=0&&dy>=0&&dx<n&&dy<m&&(hx[dx][dy]<hx[x][y])){
			//flag = false;
			jyh[x][y] = max(jyh[x][y],dfs(dx,dy) + 1);
		}
	}
	/*if(flag){
		jyh[x][y] = 1;
	}*/
	max_cd = max(jyh[x][y],max_cd);
	return jyh[x][y];
}

int main(){
	cin >> n>>m;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin >> hx[i][j];
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			dfs(i,j);
		}
	}
	/*for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cout << jyh[i][j]<<" ";
		}
		cout << endl;
	}*/
	cout << max_cd;
	return 0;
}
