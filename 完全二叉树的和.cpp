#include<bits/stdc++.h>
using namespace std;

struct node{
	int V;
	node *l;
	node *r;
};
int n;
void chuangjian(node *T){
	if(n){
		int x;
		cin >> x;
		T->V = x;
		n--;
		chaungjian(T->l);
		chuangjian(T->r);
	}
}

int main(){
	
	cin >>n;
	node *T;
	chuangjian(T);
}






