/*
  考察联通块和取数，先从12个数里面取5个
  dfs(int now,int cnt){
    if(cnt == k){
      ...
      return;
    }
    if(now == n)
      return;
    dfs(now+1,cnt+1);
    dfs(now+1,cnt)
  }
  取数模板。
  然后用bfs查找连通块，注意设置变量，
  当连通块的个数为1的时候就自加
*/

#include <bits/stdc++.h>
using namespace std;
struct dian{
	int x;
	int y;
};
int num[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
int aa = 0;
int xx[4] = {-1,1,0,0};
int yy[4] = {0,0,-1,1};

void dfs(int now,int cnt,int temp[5]){
	if(cnt == 5){
		int num2[3][4] = {0};
		int aaa = 1;
		for(int i = 0;i<3;i++){
			for(int j = 0;j<4;j++){
				if(count(temp,temp + 5,aaa)!=0){
					num2[i][j] = aaa;
				}
				aaa++;
			}
		}
		int vis[3][4] = {0};
		int flag = 0;
		for(int i = 0;i<3;i++){
			for(int j = 0;j<4;j++){
				if(num2[i][j]!=0&&!vis[i][j]){
					//cout << num2[i][j]<<" "<<i<<" "<<j<<" "<<endl;
					//cout <<i<<" "<<j<<" "<< aa<<endl;
					dian temp;
					temp.x = i;
					temp.y = j;
					vis[i][j] = 1;
					queue<dian> q;
					q.push(temp);
					while(!q.empty()){
						dian temp = q.front();
						for(int z = 0;z<4;z++){
							int dx = temp.x + xx[z];
							int dy = temp.y + yy[z];
							if(dx>=0&&dy>=0&&dx<3&&dy<4&&!vis[dx][dy]&&
								 num2[dx][dy]!=0){
								 vis[dx][dy] = 1;
								 dian temp3;
								 temp3.x = dx;
								 temp3.y = dy;
								 q.push(temp3);
								 //cout << dx<<" "<<dy<<endl;
							}
						}
						q.pop();
					}
					flag++;
				}
			}
		}
		if(flag == 1)
			aa++;
		return;
	}
	if(now == 12)
		return;
	temp[cnt] = num[now];
	dfs(now + 1,cnt+1,temp);
	temp[cnt] = 0;
	dfs(now + 1,cnt,temp);
}
int main(){
	int temp[5];
	dfs(0,0,temp);
	cout <<aa<<endl;
}
