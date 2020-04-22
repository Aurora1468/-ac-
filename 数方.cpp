#include<bits/stdc++.h>
using namespace std;
bool lifang(int x){

	for(int i = 1;i*i<=x;i++){
		if(i*i*i == x)
			return true;
	}
	return false;
}

bool zhishu(int x){
	for(int i = 2;i<=x/2;i++){
		if(x%i == 0)
			return false;
	}
	return true;
}

bool pingfang(int x){
	for(int i = 1;i<=x/2;i++){
		if(i*i == x)
			return true;
	}
	return false;
}

bool sanjiao(int x){
	int sum = 0;
	for(int i = 1;sum<=x;i++){
		if(sum == x)
			return true;
		sum = sum + i;
	}
	return false;
}

bool sicifang(int x){

	for(int i = 1;i*i*i<=x;i++){
		if(i*i*i*i == x)
			return true;
	}
	return false;
}


int main(){
	int sum = 10000;
	for(int a = 1;a<=9;a++){
		for(int b = 1;b<=9;b++){
			for(int c = 1;c<=9;c++){
				for(int d = 1;d<=9;d++){
					for(int e = 1;e<=9;e++){
						for(int f = 1;f<=9;f++){
							for(int g = 1;g<=9;g++){
								for(int h = 1;h<=9;h++){
									for(int i = 1;i<=9;i++){
										if(sum == 10000){
										sum = 0;
										sum++;
										cout <<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<endl;
										}if(lifang(a*100 + b*10 + c)){
											if(zhishu(d*100 + e*10 + f)){
												if(pingfang(g*100 + h*10 + i)){
													if(sanjiao(a*100 + d*10 + g)){
														if(sicifang(b*100 + e*10 + h)){
															if(c == i){
																cout <<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<" "<<i<<endl;
																return 0;
															}
														}
													}
												}
											}
										} 
									}
								} 
							}
						}
					}
				}
			}
		}
	}
}




