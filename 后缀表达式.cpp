#include<bits/stdc++.h>
using namespace std;
typedef long long ll;  

int main(){  
	//stack<char> s;
	stack<int> num;
	string a;
	cin >> a;
	int a_len = a.length();
	int sum = 0;
	int numa = 0;
	for(int i = 0;i<a_len;i++){
		if(a[i] == '@'){
			sum = num.top();
			break;
		}
		if(a[i] == '.'){
			num.push(numa);
			numa = 0;
		}
		else if(a[i]>='0'&&a[i]<='9'){
			numa = numa*10 + int(a[i]-'0');
		}
		else if(a[i] == '-'||a[i] == '+'||a[i] == '*'||a[i] == '/'){
			int tempa = num.top();
			num.pop();
			int tempb = num.top();
			num.pop();
			int tempc;
			if(a[i] == '-'){
				tempc = tempb - tempa;
			}
			else if(a[i] == '+'){
				tempc = tempb + tempa;
			}
			else if(a[i] == '*'){
				tempc = tempb * tempa;
			}
			else if(a[i] == '/'){
				tempc = tempb / tempa;
			}	
			num.push(tempc);
		}
	}
	cout << sum;
	return 0;
}
