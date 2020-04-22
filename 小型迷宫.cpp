#include<iostream>
#include<string>
using namespace std;
int vis[10][10] = {0};
string s[10];
int temp[10][10] = {0};

bool dfs(int x,int y){
	if(temp[x][y] == 1){
		return false;
	}
	if(s[x][y] == 'U'){
		
		int dx = x-1;
		cout << dx<<endl;
		if(dx<0){
			vis[x][y] = 1;
			return true;
		}
		else if(vis[dx][y] == 1){
			vis[x][y] = 1;
			return true;
		}	
		else {
			temp[x][y] = 1;
			if(dfs(dx,y) == true){
				vis[x][y] = 1;
				return true;
			}
		}
		
	}
	else if(s[x][y] == 'D'){
		int dx = x+1;
		if(dx == 10){
			vis[x][y] = 1;
			return true;
		}
		else if(vis[dx][y] == 1){
			vis[x][y] = 1;
			return true;
		}	
		else {
			temp[x][y] = 1;
			if(dfs(dx,y) == true){
				vis[x][y] = 1;
				return true;
			}
		}
	}
	else if(s[x][y] == 'L'){
		int dy = y-1;
		if(dy<0){
			vis[x][y] = 1;
			return true;
		}
		else if(vis[x][dy] == 1){
			vis[x][y] = 1;
			return true;
		}	
		else {
			temp[x][y] = 1;
			if(dfs(x,dy) == true){
				vis[x][y] = 1;
				return true;
			}
		}
	}
	else if(s[x][y] = 'R'){
		int dy = y+1;
		if(dy == 10){
			vis[x][y] = 1;
			return true;
		}
		else if(vis[x][dy] == 1){
			vis[x][y] = 1;
			return true;
		}	
		else {
			temp[x][y] = 1;
			if(dfs(x,dy) == true){
				vis[x][y] = 1;
				return true;
			}
		}
	}
	return false;
}

int main(){
	
	int sum = 0;
	for(int i = 0;i<10;i++){
		cin >> s[i];
	}
	//temp[0][0] = 1;
	for(int i = 0;i<10;i++){
		for(int j = 0;j<10;j++){
			dfs(i,j);
			int temp[10][10] = {0};
		}
	}
	for(int i = 0;i<10;i++){
		for(int j = 0;j<10;j++){
			if(vis[i][j] == 1)
				sum++;
			cout << vis[i][j]<<" ";
		}
		cout << endl;
	}
	cout << sum;
}
