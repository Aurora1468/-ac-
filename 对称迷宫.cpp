#include<bits/stdc++.h>
using namespace std;

string fz[20];
vector<string> s;
int n;
int xx[] = {0,1};
int yy[] = {1,0};

bool dc(string q){
	string p;
	for(int i = q.length()-1;i>=0;i--){
		p = p + q[i];
	}
	if(p == q)
		return true;
	return false;
}

void dfs(int x,int y,string temp){ 
	if(x == n-1&&y == n-1){
		if(dc(temp)&&(count(s.begin(),s.end(),temp) == 0)){
			s.push_back(temp);
		} 
		return;
	}
	for(int i = 0;i<2;i++){
		int dx = x + xx[i];
		int dy = y + yy[i];
		if(dx<n&&dy<n)
			dfs(dx,dy,temp + fz[dx][dy]);
	}
	
}

int main(){
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> fz[i];
	}
	string c;
	c = c + fz[0][0];
	dfs(0,0,c);
	cout << s.size();
	return 0;
}
