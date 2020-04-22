#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int nums[n],nums2[n];
	for(int i = 0;i<n;i++){
		cin >> nums[i];	
		nums2[i] = i+1;
	}
	do{
		cout << nums[0]<<nums[1]<<nums[2]<<nums[3]<<nums[4]<<endl;
	}while(next_permutation(nums,nums+5));
} 
