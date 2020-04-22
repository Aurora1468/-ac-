#include<bits/stdc++.h>
using namespace std;
int sum = 0;
int sushu(int num){
	int flag = 0;
	for(int i = 2;i < num; i++){
		if(num%i == 0)
			flag = 1;
	}
	if(flag == 0)
		sum++;
} 
int main(){
	int n,k;
	cin >> n >> k;
	int nums[n];
	for(int i = 0;i<n;i++)
		cin >> nums[i];
	
}
