#include<bits/stdc++.h>
using namespace std;

int T,N,M;
int fz[7][7];
int max_sum = 0;
int vis[7][7] = {0};
int xx[] = {-1,-1,0,1,1,1,0,-1};
int yy[] = {0,1,1,1,0,-1,-1,-1};

void dfs(int hang,int sum){
	max_sum = max(max_sum,sum);//刷新最大值 
	if(hang > N){		//扫描完成就返回 
		return;
	}
	for(int i = 1;i<=M;i++){
		if(!vis[hang][i]){	//如果这个地方没有被选过 
			vis[hang][i]++;	//添加一个被选过的标记 
			for(int x = 0;x<8;x++){
				vis[hang + xx[x]][i + yy[x]]++;//给这个点周围的点也加上标记 
			}
			dfs(hang ,sum + fz[hang][i]);
			vis[hang][i]--;//回溯 
			for(int x = 0;x<8;x++){
				vis[hang + xx[x]][i + yy[x]]--;//回溯 
			}
		}
	}
	cout << sum<<endl; 
	dfs(hang + 1,sum); //扫描下一行 
}

int main(){
	cin >> T;
	for(int i = 0;i<T;i++){
		cin >> N>>M;
		for(int x = 1;x<=N;x++){
			for(int y = 1;y<=M;y++)
				cin >> fz[x][y];
		}
		dfs(1,0);//从第一行开始，初始和为零 
		cout << max_sum<<endl;
		max_sum = 0;
		for(int x = 1;x<=6;x++){
			for(int y = 1;y<=6;y++)
				vis[x][y] = 0;
		}
	}
} 
