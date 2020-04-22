#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,a = 0,sum = 0;
	cin >> n;
	int nums[n];
	while(n>0){
		cin >> nums[a];
		a++;
		n--;
	}
	bool h = true;
	for(int x = 1;x<a-1;x++){
		if(nums[x]<nums[x-1]&&nums[x]<nums[x+1]){
			sum++;
			h = false;
		}
		else if(nums[x]<nums[x+1]&&nums[x]<=nums[x-1]&&(h == false)){
			sum++;
			h = true;
		}
	}
	cout << sum;
}
