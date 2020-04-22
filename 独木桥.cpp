#include<cstdio>
#include<string>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int L,N,max = 0;
	cin >> L;
	cin >> N;
	int min = L;
	int sb[L] = {0};
	int i = 0;
	while(i<N&&cin >> sb[i]){
		int A;
		if(L%2!=0)
			A = abs(L/2)+1;
		else
			A = abs(L/2);
		if(A - sb[i]<min)
			min = sb[i];
		cout << min;
		i++;
	}
	cout << L-min-1;
	return 0;
} 
