#include<bits/stdc++.h>
using namespace std;


int main(){
	int x,y,time;
	cin >> x>>y>>time;
	int num[x][y];
	for(int i = 0;i<x;i++){
		for(int j = 0;j<y;j++){
			cin >> num[i][j];
		}
	}
	int max_hs = -1;
	int max_x;
	int max_y;
	int sum = 0;
	for(int i = 0;i<x;i++){
		for(int j = 0;j<y;j++){
			if(num[i][j]!=0){

				if(num[i][j]>max_hs){
					max_hs = num[i][j];
					max_x = i;
					max_y = j;
				}
			}
		}
	}
	//cout << max_x<<" "<<max_y<<endl;
	time--;
	if((time - max_x - 1 - max_x - 1)<0){
		cout << sum;
		return 0;
	}
	time = time - max_x - 1;
	sum = sum + num[max_x][max_y];
	num[max_x][max_y] = 0;
	while(true){
		int max_hs2 = -1;
		int max_x2;
		int max_y2;
		for(int i = 0;i<x;i++){
			for(int j = 0;j<y;j++){
				if(num[i][j]!=0){
					if(num[i][j]>max_hs2){
						max_hs2 = num[i][j];
						max_x2 = i;
						max_y2 = j;
						//cout <<i<<" "<<j<<" "<< max_x2<<" "<<max_y2<<" "<<num[i][j]<<" "<<num[max_x2][max_y2]<<endl;
					}
				}
			}
		}
		/*for(int i = 0;i<x;i++){
			for(int j = 0;j<y;j++){
				cout << num[i][j]<<" ";
			}
			cout << endl;
		}
		cout << endl;*/
		if((time - (abs(max_x2-max_x) + abs(max_y2-max_y)) -2 - max_x2)<0){
			cout << sum;
			return 0;
		}
		else{
			sum = sum + num[max_x2][max_y2];
			num[max_x2][max_y2] = 0;
			//cout << num[max_x2][max_y2]<<endl;
			//cout << sum<<endl;
			time = time - (abs(max_x2-max_x) + abs(max_y2-max_y)) - 1;
//cout << time<<endl;
			max_x = max_x2;
			max_y = max_y2;
			//cout << max_x<<" "<<max_y<<endl;
		}
	}
	cout << sum;
}
