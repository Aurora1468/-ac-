#include<bits/stdc++.h>
using namespace std;

int n;
bool lie[20] = {false};
bool zuoxie[200] = {false};
bool youxie[200] = {false};
int sum = 0;
int z = 0;
int vis[20];
void dfs(int hang){
	if(hang>n){
		if(z <3 ){
			for(int i = 1;i<=n;i++)
				cout << vis[i]<<" ";
			cout << endl;
			z++;
		}
		sum++;
		return;
	}
	for(int i = 1;i<=n;i++){
		if(!lie[i]&&!zuoxie[hang + i]&&!youxie[hang - i + n]){
			lie[i] = true;
			zuoxie[hang + i] = true;
			youxie[hang - i + n] = true;
			vis[hang] = i;
			dfs(hang + 1);
			vis[hang] = 0;
			lie[i] = false;
			zuoxie[hang + i] = false;
			youxie[hang - i + n] = false;
		}
	}
}


int main(){
	
	cin >> n;
	int qipan[n+1][n+1] = {0};

	dfs(1);	
	cout << sum;
	return 0;
}
