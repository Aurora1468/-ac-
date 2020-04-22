#include<bits/stdc++.h>
using namespace std;
int num[5000] = {0};
bool sushu(int x){
	if(x == 1)
		return false;
	for(int i = 2;i<=sqrt(x);i++){
		if(x%i == 0)
			return false;
	}
	return true;
}

int main(){
	int cnt = 0;
	for(int i = 1;i<=900000&&cnt<5000;i++){
		if(sushu(i)){
			num[cnt] = i;
			cnt++;
		}
	}
	for(int i = 0;i<5000;i++){
		int temp = num[i];
		int leng = 1;
		for(int gc = 2;gc<500;){
			if(sushu(gc + temp)){
				temp = temp + gc;
				leng++;
				//cout << leng<<" "<<temp<<" "<<gc<<endl;
				if(leng == 10){
					cout << temp<<" "<<gc<<endl;
					break;
				}
			}
			else{
				gc++;
				leng = 1;
				temp = num[i];
			}
		}
	}

}
