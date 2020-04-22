#include<bits/stdc++.h>
using namespace std;

struct dian{
	int x;
	int y;
	int bs;
};

int main(){
	int n,m;
	double d;
	cin >> n>>m>>d;
	int fz[n+1][m+1] = {0};
	dian zuobiao;
	zuobiao.x = 1;
	zuobiao.y = 1;
	zuobiao.bs = 0;
	fz[1][1] = 0;
	queue <dian> q;
	q.push(zuobiao);
	while(!q.empty()){
		//cout << endl;
		dian zuobiao = q.front();
		for(int i = zuobiao.x;i<=n;i++){
			for(int j = zuobiao.y;j<=m;j++){
				if(i == zuobiao.x&&j == zuobiao.y)
					continue;
				else if(fz[i][j] == zuobiao.bs&&fz[i][j]!=0)
					continue;
				else if(sqrt(pow(i-zuobiao.x,2) + pow(j-zuobiao.y,2))<=d){
					
					dian temp;
					temp.x = i;
					temp.y = j;
					temp.bs = zuobiao.bs + 1;
					fz[i][j] = temp.bs;
					q.push(temp);
				}
			}
		}
		q.pop();
	}
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=m;j++)
			cout<< fz[i][j]<<" ";
		cout <<endl;
	}
	cout << fz[n][m];
}








