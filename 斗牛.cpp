#include<bits/stdc++.h>
using namespace std;
int main(){
	int max_niu = -1;
	int num[5];
	for(int i = 0;i<5;i++){
		string temp;
		cin >> temp;
		if(temp == "S"||temp == "K"||temp == "Q"||temp == "J"||temp == "10")
			num[i] = 10;
		else if(temp == "A")
			num[i] = 1;
		else 
			num[i] = temp[0] - 48;
	}
	sort(num,num + 5);
	if(((num[0] + num[1] + num[2]) %10 == 0)&&((num[3] + num[4])%10 == 0)){
		cout << "so cool!";
		return 0;
	}
	else if(((num[0] + num[1] + num[2]) %10 == 0)&&((num[3] + num[4])%10 != 0)){
		max_niu = max(max_niu,(num[3] + num[4])%10);
	}
	while(next_permutation(num,num + 5)){
		if(((num[0] + num[1] + num[2]) %10 == 0)&&((num[3] + num[4])%10 == 0)){
			cout << "so cool!";
			return 0;
		}
		else if(((num[0] + num[1] + num[2]) %10 == 0)&&((num[3] + num[4])%10 != 0)){
			max_niu = max(max_niu,(num[3] + num[4])%10);
		}
	}
	if(max_niu == -1)
		cout <<"so sad!";
	else 
		cout <<max_niu;
	return 0;
}
