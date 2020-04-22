#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > nums;
int n;
void back(vector<int> num,int *temp){
	if(num.size() == 10){
		int sum = 0;
		for(int i = 0;i<10;i++){
			sum = sum + num[i];
		}
		if(sum == n){
			nums.push_back(num);
		}
		return;
	}
	for(int x = 0;x<3;x++){
		num.push_back(temp[x]);
		back(num,temp);
		num.pop_back();
	}
}
int main(){

	cin >> n;
	vector<int> num;
	int temp[3] = {1,2,3};
	back(num,temp);
	cout << nums.size()<<endl;
	for(int i = 0;i<nums.size();i++){
		for(int x = 0;x<nums[0].size();x++)
			cout << nums[i][x]<<" ";
		if(i!=nums.size()-1)
			cout << endl; 
	}
} 
