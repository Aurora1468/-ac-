#include<bits/stdc++.h>
using namespace std;

struct tree{
	char data;
	tree *l,*r;
};
int n;
tree *creat_tree(tree *T){
	char x;
	cin >> x;
	if(x != '-'){
		n--;
		T = new tree();
		T->data = x;
		T->l = creat_tree(T->l);
		T->r = creat_tree(T->r);
	}
	else
		T = NULL;
	return T;
}

void bl(tree *T){
	//cout << T->data;
	if(T){
		cout << T->data<<" ";
		bl(T->l);
		bl(T->r);
	}
}
int main(){
	cin >> n;
	tree *T;
	tree *a = creat_tree(T);
	bl(a);
	return 0;
}
