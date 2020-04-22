#include<bits/stdc++.h>
using namespace std;
long long num[25][25][25] = {0};

long long w(long long a,long long b,long long c){
	if(a<=0||b<=0||c<=0)
		return 1;
		
	else if(a>20||b>20||c>20)
		return w(20,20,20);
	
	else if(num[a][b][c])
		return num[a][b][c];
	
	else if(a<b&&b<c){
		num[a][b][c] = w(a,b,c-1) + w(a,b-1,c-1) - w(a,b-1,c);
	}
	else
		num[a][b][c] = w(a-1,b,c) + w(a-1,b-1,c) + w(a-1,b,c-1) - w(a-1,b-1,c-1);
	return num[a][b][c];
}

int main(){
	
	while(true){
		long long a,b,c;
		cin >> a>>b>>c;
		if(a ==-1&&b==-1&&c==-1)
			break;
		else
			cout << "w("<<a<<", "<<b<<", "<<c<<") = "<<w(a,b,c)<<endl;
	}
	return 0;
} 
