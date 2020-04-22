#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int sum = 1;
int jis(string num){
	if(num[0] == '1')
		return 0;
	else
		for(int i = 1;i<int(num[0])/2;i++){
			sum++;
			num = std::to_string(i) + num;
			cout << num << '\n';
			jis(num);	
		}
	printf("%d\n",sum);
}
int main(){
	int num;
	scanf("%d",&num);
	string num1;
	num1 = std::to_string(num);
	jis(num1);
} 
