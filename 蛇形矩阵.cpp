#include<bits/stdc++.h>
using namespace std;
int n;
int num[20][20];

int main(){
	cin >> n;
	int x = 1;int y = 1;int k = 1;
	while(k<=n*n){
		while(y<=n){
			if(!num[x][y]){
				num[x][y] = k;
				y++;
				k++;
			}
			else
				break;
		}
		y--;
		x++;
		//cout << x<<" "<<y<<endl;
		while(x<=n){
			//cout << x<<" "<<y<<" "<<k<<endl;
			if(!num[x][y]){
				num[x][y] = k;
				x++;
				k++;
			}
			else
				break;
		}
		x--;
		y--;
		while(y>0){
			if(!num[x][y]){
				//cout << x<<" "<<y<<" "<<k<<endl;
				num[x][y] = k;
				y--;
				k++;
			}
			else
				break;
		}
		y++;
		x--;
		while(x>0){
			if(!num[x][y]){
				num[x][y] = k;
				x--;
				k++;
			}
			else
				break;
		}
		x++;
		y++;
	}
	for(int i = 1; i <= n; i++){
      for(int j = 1; j <= n; j++)
           printf("%-3d", num[i][j]);
		cout << endl;
	 }

}
