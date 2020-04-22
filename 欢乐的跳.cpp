#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,q = 0;
	cin >> n;
	int nums[n],cha[n-1],temp[n-1];
	for(int i = 0;i<n;i++){
		cin >> nums[i];
	}
	for(int a = 0;a<n-1;a++)
		temp[a] = a+1;
	for(int x = 1;x<n;x++){
		if(nums[x]-nums[x-1]>=0){
			cha[x-1] = nums[x]-nums[x-1];
			//cout << cha[x-1];
		}
		else{
			cha[x-1] = -(nums[x]-nums[x-1]);
			//cout <<cha[x-1];
		}
	}
	for(int z = 0;z<n-1;z++){
		if(count(cha,cha+n-1,temp[z])==0){
			cout << "Not jolly";
			q = 1;
			break;
		}
	}
	if(q == 0)
		cout << "Jolly";
	return 0;
}
