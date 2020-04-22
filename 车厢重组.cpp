#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,sum = 0,temp;
	cin >> n;
	int nums[n];
	for(int i = 0;i<n;i++)
		cin >> nums[i];
	for(int a = 0;a<n;a++)
		for(int b = 0;b<n-a-1;b++){
			if(nums[b]>nums[b+1]){
				sum++;
				temp = nums[b];
				nums[b] = nums[b+1];
				nums[b+1] = temp;
			}
		}
	cout << sum;
} 
