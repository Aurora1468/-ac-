#include<bits/stdc++.h>
using namespace std;
int main()
{
    double A,B,C,h=0;
    cin>>A>>B>>C;
    int a[10] = {0},j,z,i,flag = 0;
    a[0] = 1;
	for(int temp = 1;i<=999;temp++){
		i = temp * A;
    	j = temp * B;
    	z = temp * C;
    	if(j>999||z>999)
    		break;
    	//cout << i << " "<<j<<" "<<z<<endl;
    			if(!a[i/100]){
    				a[i/100] = 1;
    				if(!a[i/10%10]){
    					a[i/10%10] = 1;
    					if(!a[i%10]){
    						a[i%10] = 1;
    						
    						
    						if(!a[j/100]){
    							a[j/100] = 1;
    							if(!a[j/10%10]){
    								a[j/10%10] = 1;
    								if(!a[j%10]){
    									a[j%10] = 1;
    									
    									
    									if(!a[z/100]){
    										a[z/100] = 1;
    										if(!a[z/10%10]){
    											a[z/10%10] = 1;
    											if(!a[z%10]){
    												a[z%10] = 1;
    												if(double(j)/double(i)==B/A&&C/B == double(z)/double(j)){
    													cout << i<<" "<<j<<" "<<z<<endl;
    													flag = 1;
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
    			for(int v = 0;v<10;v++){
    				a[v] = 0;
    				a[0] = 1;
				}
			}	
			if(flag == 0)
				cout << "No!!!";
	return 0;
}
