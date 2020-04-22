#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main(){
	queue<int> t1[10];
	queue<int> t2[10];
	int n,k;
	scanf("%d %d",&n,&k);
	int temp;
	int max_num = -1;
	for(int i = 0;i<n;++i){
		scanf("%d",&temp);
		t1[temp%10].push(temp);
		max_num = max(max_num,temp);
	}
	char aaa[12];
	sprintf(aaa,"%d",max_num);
	
	//int weishu = 1;
	int max_num_len = strlen(aaa);
	int temp2;
	for(int i = 1;i<max_num_len;++i){
		if(i%2 == 1){
			for(int j = 0;j<10;++j){
				while(!t1[j].empty()){
					temp = t1[j].front();
					temp2 = temp;
					t1[j].pop();
					for(int z = 0;z<i;++z){
						temp2/=10;
					}
					t2[temp2%10].push(temp);
				}
			}
		}
		else if(i%2 == 0){
			for(int j = 0;j<10;++j){
				while(!t2[j].empty()){
					temp = t2[j].front();
					temp2 = temp;
					t2[j].pop();
					for(int z = 0;z<i;++z){
						temp2/=10;
					}
					t1[temp2%10].push(temp);
				}
			}
		}
	}
	int flag = 0;
	if(max_num_len%2 == 0){
		for(int j = 0;j<10;++j){
			while(!t2[j].empty()){
				//cout << t2[j].front();
				if(flag == k){
					cout<<t2[j].front();
					return 0;
				}
				++flag;
				t2[j].pop();
			}
		}
	}
	
	if(max_num_len%2 == 1){
		for(int j = 0;j<10;++j){
			while(!t1[j].empty()){
				if(flag == k){
					cout<<t1[j].front();
					return 0;
				}
				++flag;
				t1[j].pop();
			}
		}
	}
	return 0;
}


