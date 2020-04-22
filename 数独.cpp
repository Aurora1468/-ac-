#include<bits/stdc++.h>
using namespace std;

int sd[10][10] = {0};
int vis[10][10] = {0};

void dfs(int x,int y){
	if(sd[x][y]!=0){
		if(x == 9&&y == 9){
			return;
		}
		else if(y==9){
			dfs(x+1,1);
		}
		else{
			dfs(x,y+1);
		}
	}
	/*if(x == 9&&y == 9){
		cout << x<<" "<<y<<endl;
		for(int i = 1;i<=9;i++){
			for(int j = 1;j<=9;j++){
				cout<< sd[i][j]<<" ";
			}
			cout << endl;
		}
	cout << endl;
}*/
	if(!vis[x][y]&&sd[x][y]==0){
		//vis[x][y] = 1;
		for(int i = 1;i<=9;i++){
			bool flag = true;
			for(int j = 1;j<=9;j++){
				if(sd[x][j] == i||sd[j][y] == i){
					flag = false;
					break;
				}
			}
			for(int dx = (x-1)/3*3+1;dx<=(x-1)/3*3+1+2;dx++){
				for(int dy = (y-1)/3*3+1;dy<=(y-1)/3*3+3;dy++){
					if(i == sd[dx][dy]){
						flag = false;
						break;
					}
				}
			}
			if(flag){
				sd[x][y] = i;
				
				if(x == 9&&y==9){
					for(int i = 1;i<=9;i++){
						for(int j = 1;j<=9;j++){
							cout<< sd[i][j]<<" ";
						}
						cout << endl;
					}
					return;
				}
				else if(y == 9)
					dfs(x+1,1);
				else 
					dfs(x,y+1);
				sd[x][y] = 0; 
			}
			
		}
	}
	 
}

int main(){
	for(int i = 1;i<=9;i++){
		for(int j = 1;j<=9;j++){
			cin >> sd[i][j];
			if(sd[i][j]!=0)
				vis[i][j] = 1;
		}
	}
	dfs(1,1);
	/*for(int i = 1;i<=9;i++){
		for(int j = 1;j<=9;j++){
			cout<< sd[i][j]<<" ";
		}
		cout << endl;
	}
	cout << endl;*/
}
