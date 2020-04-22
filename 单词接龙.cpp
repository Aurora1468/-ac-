#include<bits/stdc++.h>
using namespace std;
int n;
string dc[21];

int max_len;
int vis[22] = {0};
void dfs(string s,int len){
	
	//cout << s<<endl;
	max_len = max(max_len,len);
	for(int i = 0;i<n;i++){
		int dc_len = dc[i].length(),s_len = s.length();
		int p = 1;
		//cout <<dc[i]<<endl;
		while(p < min(s_len,dc_len)){
			//cout <<s.substr(s_len-p) <<dc[i].substr(0,p)<<i<<vis[i]<<endl;
			if(s.substr(s_len-p) == dc[i].substr(0,p)&& vis[i]<2){
				vis[i]++;
				dfs(dc[i],len + dc_len - p);
				vis[i]--;
				break;
			}
			p++;
		}
	}
}


int main(){
	
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> dc[i];
	}
	char z;
	cin >> z;
	for(int i = 0;i<n;i++){
		if(dc[i][0] == z){
			vis[i]++;
			dfs(dc[i],dc[i].length());
			vis[i]--;
		}
	}
	cout << max_len;
	return 0;
} 
