#include<bits/stdc++.h>
using namespace std;
int v;
int sl[30] = {0};
int g;
int fz[30][30];

void dfs(int x,int y,int *yiyou){
  
}


int main(){
  cin >> v;
  for(int i = 0;i<v;i++){
    cin >> sl[i];
  }
  cin >> g;
  for(int i = 0;i<v;i++){
    for(int j = 0;j<g;j++){
      cin >> fz[i][j];
    }
  }
  int yiyou[v] = {0};
  dfs(0,0,yiyou);
}
