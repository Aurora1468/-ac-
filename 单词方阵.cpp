#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 
int n;
string s[105];
string s2[105];
int vis[105][105] = {0};
string q = "yizhong";
struct zfc{
	int x;
	int y;
};
int xx[8] = {-1,-1,-1,0,1,1,1,0};
int yy[8] = {-1,0,1,1,1,0,-1,-1};
int fx[8] = {0,1,2,3,4,5,6,7};

void dfs(int m,int k,vector<zfc> aa,string ss,int cnt){
	//cout << ss<<endl;
	//cout << m<<" "<<n<<endl;
	if(ss == q){
		//cout << ss<<endl;
		for(int i = 0;i<aa.size();i++){
			s2[aa[i].x][aa[i].y] = ss[i];
		}
		return;
	}
	int ss_len = ss.length();
	int dx = xx[cnt]+m;
	int dy = yy[cnt]+k;
	if(dx>=0&&dx<n&&dy>=0&&dy<n&&!vis[dx][dy]){
		//cout << s[dx][dy]<<" "<<q[ss_len]<<endl;
		if(s[dx][dy] == q[ss_len]){
			ss = ss + s[dx][dy];
			//cout << ss<<endl;
			vis[dx][dy] = 1;
			zfc temp;
			temp.x = dx;
			temp.y = dy;
			aa.push_back(temp);
			dfs(dx,dy,aa,ss,cnt);
			vis[dx][dy] = 0;
		}
	}
}

int main(){
	cin >> n; 
	for(int i = 0;i<n;i++){
		cin >> s[i];
	}
	for(int i = 0;i<105;i++){
		for(int j = 0;j<105;j++){
			s2[i] = s2[i] + '*';
		}
	}
	
	int sx_len = s[0].length();
	for(int i = 0;i<n;i++){
		for(int j = 0;j<sx_len;j++){
			if(s[i][j] == 'y'){
				//cout << i<<" "<<j<<endl;
				vector<zfc> aa;
				zfc temp;
				temp.x = i;
				temp.y = j;
				vis[i][j] = 1;
				aa.push_back(temp);
				for(int h = 0;h<8;h++)
					dfs(i,j,aa,"y",h);
				vis[i][j] = 0;
			}
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<sx_len;j++){
			cout << s2[i][j];
		}
		cout << endl;
	}
	
	
	return 0;
}
