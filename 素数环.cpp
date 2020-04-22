#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n;
bool sushu(int ss){
	for(int i = 2;i<ss;i++){
		if(ss%i==0)
			return false;
	}
	return true;
}
void backtrack(vector<int> num,vector<int> nums){
	if(num.size() == n){
		if(sushu(num[num.size()-1]+1)){
			for(int x = 0;x<n;x++)
				cout << num[x] << " ";
			cout << endl;
		}
		return;
	}
	for(int x = 1;x<nums.size();x++){
		if(count(num.begin(),num.end(),nums[x])==0&&sushu(num[num.size()-1]+nums[x])){
			num.push_back(nums[x]);
			backtrack(num,nums);
			num.pop_back();
		}	
	}	
}
int main(){
	cin >> n;
	vector<int> num,nums;
	for(int i = 1;i<=n;i++)
		nums.push_back(i);
	num.push_back(1);
	backtrack(num,nums);
	return 0;
}
