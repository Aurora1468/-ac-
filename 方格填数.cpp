#include <bits/stdc++.h>
using namespace std;

int main(){
	int num[10] = {0,1,2,3,4,5,6,7,8,9};
	int sum = 0;
	do{
		if(abs(num[0]-num[1])>1&&abs(num[1]-num[2])>1&&
			 abs(num[0]-num[3])>1&&abs(num[0]-num[4])>1&&
		 	 abs(num[0]-num[5])>1&&abs(num[1]-num[4])>1&&
		 	 abs(num[1]-num[5])>1&&abs(num[1]-num[6])>1&&
		 	 abs(num[2]-num[5])>1&&abs(num[2]-num[6])>1&&
		 	 abs(num[3]-num[7])>1&&abs(num[3]-num[8])>1&&
		   abs(num[4]-num[3])>1&&abs(num[4]-num[7])>1&&
		 	 abs(num[4]-num[8])>1&&abs(num[4]-num[9])>1&&
		 	 abs(num[4]-num[5])>1&&abs(num[5]-num[6])>1&&
		 	 abs(num[5]-num[9])>1&&abs(num[5]-num[8])>1&&
		 	 abs(num[7]-num[8])>1&&abs(num[8]-num[9])>1&&
		 	 abs(num[6]-num[9])>1){
				 /*for(int i = 0;i<10;i++){
					 cout << num[i]<<" ";
				 }
				 cout << endl;*/
				 sum++;
			 }
	}while(next_permutation(num,num + 10));
	cout << sum;

}
