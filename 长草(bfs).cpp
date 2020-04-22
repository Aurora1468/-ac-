#include<bits/stdc++.h>
using namespace std;
int xx[] = {-1,1,0,0};
int yy[] = {0,0,-1,1};

struct dian{
	int x;
	int y;
	int ts;
};

int main(){
	int n,m;
	cin >> n>>m;
	string s[n];
	for(int i = 0;i<n;i++){
		cin >> s[i];
	} 
	int k;
	cin >> k;
	queue <dian> q;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(s[i][j] == 'g'){
				dian zuobiao;
				zuobiao.x = i;
				zuobiao.y = j;
				zuobiao.ts = 0;
				q.push(zuobiao);
			}
		}
	}
	while(!q.empty()){
		dian zuobiao = q.front();
		if(zuobiao.ts != k){
			for(int i = 0;i<4;i++){
				int dx = zuobiao.x + xx[i];
				int dy = zuobiao.y + yy[i];
				if(dx>=0&&dx<n&&dy>=0&&dy<m){
					dian temp;
					temp.x = dx;
					temp.y = dy;
					temp.ts = zuobiao.ts + 1;
					q.push(temp);
					s[dx][dy] = 'g';
				}
			}
		}
		q.pop();
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cout << s[i][j]<<" ";
		}
		cout << endl;
	}
} 







