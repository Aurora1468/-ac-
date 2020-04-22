#include<bits/stdc++.h>
using namespace std;
typedef long long ll; 

int main(){  
	int n;
	cin >> n;
	set<int> s;
	for(int i = 0;i<n;i++){
		int a,b;
		cin >> a>>b;
		if(a == 1){
			if(!s.insert(b).second){
				cout << "Already Exist"<<endl;
			}
		}
		else if(a == 2){
			if(!s.empty()){
				set<int>::iterator it = s.lower_bound(b);
				if(it == s.end()){
					it--;
				}
				if(it == s.begin()){
					cout << *it<<endl;
					s.erase(it);
					continue;
				}
				if(*it == b){
					cout << b<<endl;
					s.erase(it);
				}
				else{
					it--;
					set<int>::iterator it2 = it;
					it++;
					if(((*it)-b)<(b-(*it2))){
						cout << *it<<endl;
						s.erase(it);
					}
					else{
						cout << *it2<<endl;
						s.erase(it2);
					}
				}
			}
			else if(s.empty()){
				cout << "Empty"<<endl;
			}
		}
	}
	return 0;
	
}
