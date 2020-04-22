#include<bits/stdc++.h>
using namespace std;
int n;
void kssort(int num[],int l,int r){
	if(l < r){
	int i = l;int j = r;
	int x = num[i];
	while(j>i){
		while(j>i&&num[j]>=x){
			j--;
		}
		if(i<j){
			num[i] = num[j];
			i++;
		}
		while(j>i&&num[i]<x){
			i++;
		}
		if(i<j){
			num[j] = num[i];
			j--;
		}
		num[i] = x;
	}

	kssort(num,l,i-1);
	kssort(num,i+1,r);
	}
}

int main(){
	
	cin >> n;int num[n];
	for(int i = 0;i<n;i++)
		cin >> num[i];
	kssort(num,0,n-1);
	for(int i = 0;i<n;i++)
		cout << num[i] << " ";
	cout << endl;
}
