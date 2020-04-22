#include<bits/stdc++.h>
using namespace std;

struct dian{
	int x;
	int y;
};

int n,m;
string fz[600];
int vis[600][600] = {0};
int xx[] = {-1,1,0,0};
int yy[] = {0,0,-1,1};

int main(){
	int sum = 0;
	cin >> n>>m;
	for(int i = 0;i<=m+1;i++){
		fz[0] = fz[0] + "0";
	}
	for(int i = 1;i<=n;i++){
		string temp;
		cin >> temp;
		fz[i] = "0" + temp + "0";
	}
	for(int i = 0;i<=m+1;i++){
		fz[n+1] = fz[n+1] + "0";
	}
	/*cout << endl;
	for(int i = 0;i<=n+1;i++){
		cout << fz[i]<<endl;
	}*/
	dian temp;
	temp.x = 0;
	temp.y = 0;
	vis[0][0] = 1;
	fz[0][0] = '#';
	queue<dian> q;
	q.push(temp);
	while(!q.empty()){
		dian temp = q.front();
		for(int i = 0;i<4;i++){
			int dx = temp.x + xx[i];
			int dy = temp.y + yy[i];
			if(!vis[dx][dy]&&dx>=0&&dx<=n+1&&dy>=0&&dy<=m+1&&fz[dx][dy] == '0'){
				vis[dx][dy] = 1;
				fz[dx][dy] = '#';
				dian temp2;
				temp2.x = dx;
				temp2.y = dy;
				q.push(temp2);
			}
		}
		q.pop();
	}
	for(int i = 0;i<=n+1;i++){
		for(int j = 0;j<=m+1;j++){
			if(fz[i][j] == '0')
				sum++;
		}
	}
	cout << sum;
}







