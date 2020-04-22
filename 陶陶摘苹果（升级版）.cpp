#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n,s,a,b;
	cin >> n >> s >> a >> b;
	int i = 0,temp[n][2] = {0},num = 0,temp2[n],z;
	z = n;
	while(n > 0){
		cin >> temp[i][0] >> temp[i][1];
		i++;
		n--;
	}
	i = 0;
	for(i = 0;i<z;i++){
		if(temp[i][0] <= (a + b)){
			temp2[num] = temp[i][1];
			num++;
		}
	}
	sort(temp2,temp2+num);
	int sum = 0;
	for(int q = 0;q<num;q++){
		if(s - temp2[q] >= 0){
			s = s-temp2[q];
			sum++;
		}
	}
	cout << sum;
}
