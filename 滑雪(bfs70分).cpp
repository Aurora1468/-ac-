#include<bits/stdc++.h>
using namespace std;

struct dian{
	int x;
	int y;
};
int hx[130][130] = {0};
int xx[4] = {-1,1,0,0};
int yy[4] = {0,0,-1,1};

int main(){
	int n,m;
	cin >> n>>m;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin >> hx[i][j];
		}
	}
	/*for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cout << hx[i][j]<<" ";
		}
		cout << endl;
	}
	cout << endl;*/
	int max_cd = 1;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			int cd = 1;
			int vis[130][130] = {0};
			dian a;
			a.x = i;
			a.y = j;
			vis[i][j] = 1;
			queue<dian> q;
			q.push(a);
			while(!q.empty()){
				dian temp = q.front();
				int max_num = -1;
				int temp_x = -1;
				int temp_y = -1;
				for(int k = 0;k<4;k++){
					int dx = temp.x + xx[k];
					int dy = temp.y + yy[k];
					if(dx>=0&&dy>=0&&dx<n&&dy<m&&!vis[dx][dy]&&
						(hx[dx][dy]<hx[temp.x][temp.y])){
						if(hx[dx][dy]>max_num){
							temp_x = dx;
							temp_y = dy;
							max_num = hx[dx][dy];
						}
					}
				}
				//cout <<i<<" "<<j<<" "<< temp_x<<" "<<temp_y<<" "<<max_num<<endl;
				/*for(int f = 0;f<n;f++){
					for(int g = 0;g<m;g++){
						cout << vis[f][g]<<" ";
					}
					cout << endl;
				}
				cout << endl;*/
				if(temp_x!=-1&&temp_y!=-1){
					dian temp2;
					temp2.x = temp_x;
					temp2.y = temp_y;
					vis[temp2.x][temp2.y] = 1;
					//cout << temp_x<<" "<<temp_y<<endl;
					cd++;
					q.push(temp2);
				}
				q.pop();
			}
			max_cd = max(max_cd,cd);
		}
	}
	cout << max_cd;
	return 0;
}
