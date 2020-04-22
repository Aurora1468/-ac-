#include<bits/stdc++.h>
using namespace std;

int main()
{
		int sum = 0;
		int n;
		cin >> n;
		int num[n];
		int num2[n];
		int vis[n] = {0};
		for(int i = 0;i<n;i++){
			cin >> num[i];
			num2[i] = num[i];
		}
		sort(num2,num2 + n);
		for(int i = 0;i<n;i++){
			if(num[i]!=num2[i]){
				int temp = find(num,num + n,num2[i]) - num;
				//cout << temp<<endl;
				//if(!vis[temp])
				swap(num[i],num[temp]);
				vis[i] = 1;
				sum++;
			}
		}
		cout << sum;
}
