#include<bits/stdc++.h>

using namespace std;
int main(){
	char x[4],y[4],z[4];int sum = 0;
	for(int a = 0;a<2019;a++){
		for(int b = a+1;b<2019;b++){
			for(int c = b+1;c<2019;c++)
				if(a+b+c == 2019){
					sprintf(x,"%d",a);	
					sprintf(y,"%d",b);
					sprintf(z,"%d",c);
					if(count(x,x+4,'2') == 0&&count(y,y+4,'2') == 0&&count(z,z+4,'2') == 0&&count(x,x+4,'4') == 0&&count(y,y+4,'4') == 0&&count(z,z+4,'4') == 0){
						//cout << a<<" "<<b<<" "<<c<<endl;
						sum++;
					}
				}
		}
	}
	cout << sum;
	return 0;
} 
