#include<bits/stdc++.h>
using namespace std;

int n,m;
string s[200];
int xx[] = {-1,-1,0,1,1,1,0,-1};
int yy[] = {0,1,1,1,0,-1,-1,-1};
int sum = 0;
int vis[150][150] = {0};
struct dian{
	int x;
	int y;
};

int main(){
	cin >> n>>m;
	for(int i = 0;i<n;i++)
		cin >> s[i];
	int temp1,temp2;
	bool flag = true;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			//cout << i<<" "<<j<<endl;
			if(s[i][j] == 'W'&&!vis[i][j]){
				dian a;
				a.x = i;
				a.y = j;
				vis[i][j] = 1;
				queue<dian> q;
				q.push(a);
				while(!q.empty()){
					dian temp;
					temp = q.front();
					//cout <<endl;
					for(int l = 0;l<8;l++){
						int dx = temp.x + xx[l];
						int dy = temp.y + yy[l];
						if(!vis[dx][dy]&&dx>=0&&dx<n&&dy>=0&&dy<m&&s[dx][dy] == 'W'){
							//cout << dx<<" "<<dy<<endl;
							dian temp3;
							temp3.x = dx;
							temp3.y = dy;
							vis[dx][dy] = 1;
							q.push(temp3);
						}
					}
					q.pop();
				}
				/*for(int c = 0;c<n;c++){
					for(int d = 0;d<m;d++){
						cout << vis[c][d]<<" ";
					}
					cout << endl;
				}
				cout <<endl;*/
				sum++;
			}
		}
	}
	cout << sum;
	return 0;
}




