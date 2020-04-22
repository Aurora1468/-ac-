#include<bits/stdc++.h>
using namespace std;

string cf(string a,string b){
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	int ret[10000] = {0};
	for(int i = 0;i<a.length();i++){
		for(int j = 0;j<b.length();j++){
			ret[i+j] = ret[i+j] + (a[i]-'0')*(b[j]-'0');
		}
	}
	int leng = a.length()-1+b.length()-1;
	int jingwei = 0;
	for(int i = 0;i<=leng;i++){
		//cout << ret[i]<<" ";
		int temp = (ret[i] + jingwei)/10;
		ret[i] = (ret[i] + jingwei)%10;
		jingwei = temp;
	}
	if(jingwei!=0){
		leng++;
		ret[leng] = jingwei;
	}
	string ret2;
	for(int i = 0;i<=leng;i++){
		ret2 = ret2 + char(ret[i]+'0');
	}
	reverse(ret2.begin(),ret2.end());
	return ret2;
}



int main(){
	int n;
	cin >> n;
	int sum = 0;
	vector<int> num;
	for(int i = 2;i<=n;i++){
		sum = sum +i;
		num.push_back(i);
		if(sum > n){
			num.pop_back();
			int temp = sum -n;
			if(temp == 1){
				num.erase(num.begin());
				num.push_back(i+1);
				break;
			}
			else{
				//num.pop_back();
				//int a = *lower_bound(num.begin(),num.end(),sum-n);
				num.erase(lower_bound(num.begin(),num.end(),sum-n));
				num.push_back(i);
				break;
			}
		}
		else if(sum == n){
			break;
		}
	}
	string ret = "1";
	for(int i = 0;i<num.size();i++){
		cout << num[i]<<" ";
	}
	cout << endl;
	for(int i = 0;i<num.size();i++){
		char aa[10];
		sprintf(aa,"%d",num[i]);
		string bb;
		bb.assign(aa,aa+strlen(aa));
		ret = cf(ret,bb);
	}
	cout << ret;
	return 0;
}
