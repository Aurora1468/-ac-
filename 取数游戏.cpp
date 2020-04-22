#include<bits/stdc++.h>
using namespace std;

int T,N,M;
int fz[7][7];
int max_sum = 0;
int vis[7][7] = {0};
int xx[] = {-1,-1,0,1,1,1,0,-1};
int yy[] = {0,1,1,1,0,-1,-1,-1};

void dfs(int hang,int sum){
	max_sum = max(max_sum,sum);//ˢ�����ֵ 
	if(hang > N){		//ɨ����ɾͷ��� 
		return;
	}
	for(int i = 1;i<=M;i++){
		if(!vis[hang][i]){	//�������ط�û�б�ѡ�� 
			vis[hang][i]++;	//���һ����ѡ���ı�� 
			for(int x = 0;x<8;x++){
				vis[hang + xx[x]][i + yy[x]]++;//���������Χ�ĵ�Ҳ���ϱ�� 
			}
			dfs(hang ,sum + fz[hang][i]);
			vis[hang][i]--;//���� 
			for(int x = 0;x<8;x++){
				vis[hang + xx[x]][i + yy[x]]--;//���� 
			}
		}
	}
	cout << sum<<endl; 
	dfs(hang + 1,sum); //ɨ����һ�� 
}

int main(){
	cin >> T;
	for(int i = 0;i<T;i++){
		cin >> N>>M;
		for(int x = 1;x<=N;x++){
			for(int y = 1;y<=M;y++)
				cin >> fz[x][y];
		}
		dfs(1,0);//�ӵ�һ�п�ʼ����ʼ��Ϊ�� 
		cout << max_sum<<endl;
		max_sum = 0;
		for(int x = 1;x<=6;x++){
			for(int y = 1;y<=6;y++)
				vis[x][y] = 0;
		}
	}
} 
