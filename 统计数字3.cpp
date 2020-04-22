#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
int main(){
	int n,temp;
	cin >> n;
	map<int,int> num;
	while(n--){
		cin >> temp;
		num[temp]++;
	}
	//sort(num.begin(),num.end());
	for(map<int,int>::iterator a = num.begin();a!=num.end();a++){
		cout << a->first<<" "<<a->second<<endl;
	}
	
} 

