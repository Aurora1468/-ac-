#include<bits/stdc++.h>
using namespace std;


int main()
{
	int w = 0,e = 0;
	for(int i = 0;i<100;i++){
		int temp;
		cin >> temp;
		while(temp%5 == 0){
			w++;
			temp = temp/5;
		}
		while(temp%2 == 0){
			e++;
			temp = temp/2;
		}
	}
	cout << min(w,e);
	return 0;
}
