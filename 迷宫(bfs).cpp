#include<bits/stdc++.h>
using namespace std;
string s[40];

struct dian{
	int x;
	int y;
	int vis3;
	string sss;
};
vector<dian> lll;
char cc[] = {'D','L','R','U'};
int xx[] = {1,0,0,-1};		//обиовСср
int yy[] = {0,-1,1,0};
int vis2[30][50] = {0};
int main(){
	for(int i = 0;i<30;i++){
		cin >> s[i];
	}
	dian temp;
	temp.x = 0;
	temp.y = 0;
	temp.vis3 = 0;
	temp.sss = "";
	int vis[30][50] = {0};
	queue<dian> q;
	q.push(temp);
	string aa;
	vis[0][0] = 1;
	while(!q.empty()){
		dian temp;
		temp = q.front();
		for(int i = 0;i<4;i++){
			int dx = temp.x + xx[i];
			int dy = temp.y + yy[i];
			if(!vis[dx][dy]&&dx>=0&&dx<30&&dy>=0&&dy<50&&s[dx][dy]!='1'){
				
				dian temp2;
				temp2.x = dx;
				temp2.y = dy;
				temp2.sss = temp.sss + cc[i];
				temp2.vis3 = temp.vis3+ 1;
				vis[dx][dy] = 1;
				vis2[dx][dy] = temp2.vis3;
				q.push(temp2);
				if(dx == 29&&dy == 49){
					lll.push_back(temp2);
					cout << temp2.sss;
				}
			}
		}
		q.pop();
	}
	return 0;
} 









