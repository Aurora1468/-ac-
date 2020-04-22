#include<bits/stdc++.h>
using namespace std;
int mg[30][50];

void dfs(int x,int y,string lujing){
	if(x == 29&&y == 49){
		cout << lujing;
		
	}
}

int main(){
	for(int i = 0;i<30;i++)
		for(int j = 0;j<50;i++){
			int v;
			cin >> v;
			mg[i][j] = v;
		}
	string s = "";
	dfs(0,0,s);
	return 0;
} 
