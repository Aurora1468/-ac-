#include<stdio.h>
int main(){
	int n,k,temp;
	scanf("%d",&n);
	scanf("%d",&k);
	int list[n],q;
	for(int z = 0;z<n;z++)
		scanf("%d",&list[z]);
	for(int i=0; i<n; i++) {
		for(int j=0; j<n-i-1; j++) {
			if(list[j] > list[j+1]) {
				temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}
		}
	}
	int flag = 0;
	for(q = 0;q < n;q++){
		if(list[q] < list[q+1])
			flag++;
		if(flag == k)
			break;
	}
	printf("%d",list[q]);
} 	
