#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum = 0;
	int num[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int b = num[1] + num[4];
	int c = num[2] + num[5] + num[6] + num[9] + num[10];
	int g = num[6] + num[9] + num[10];
	int d = num[3] + num[7] + num[8] + num[11];
	int i = num[8] + num[11];
	if((b + c + g + d + i)%2 == 0){
		for(int i = 0;i<12;i++){
				cout << num[i]<<" ";
		}
		cout << endl;
		sum++;
	}
	int cnt = 0;
	while(next_permutation(num,num + 12)){
		int b = num[1] + num[4];
		int c = num[2] + num[5] + num[6] + num[9] + num[10];
		int g = num[6] + num[9] + num[10];
		int d = num[3] + num[7] + num[8] + num[11];
		int i = num[8] + num[11];
		
		if((b + c + g + d + i)%2 == 0){
			cnt++;
			if(cnt == 1000000){
				cout << b + c + g + d + i<<" ";
				for(int i = 0;i<12;i++){
					cout << num[i]<<" ";
				}
				cout << endl;
				cnt = 0;
			}
			sum++;
		}
	}
	cout << sum;
}
