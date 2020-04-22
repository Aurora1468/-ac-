#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int L,M;
	cin >> L >> M;
	int nums[L+1];
	for(int a = 0;a<=L+1;a++)
		nums[a] = 1;
	int start,end;
	while(M>0){
		cin >> start >> end;
		for(int i = start;i<=end;i++)
			nums[i] = 0;
		M--;
	}
	cout << count(nums,nums+L+1,1);
}
