#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
	int n;
	//vector<int> nums1(n);
	cin >> n;
	vector<int> nums1(n);
	int nums[n];
	for(int i = 0;i<n;i++){
		cin >> nums[i];	
		nums1[i] = nums[i];
	}
	sort(nums1.begin(),nums1.end());
	//s.insert(nums,nums+n);
	//cout << s.size();
	/*set<int>::iterator it;
	int set_size = s.size();
	int nums1[set_size]; 
	int x = 0;
	vector<int> nums1(s.begin(),s.end());
	/*for(it = s.begin();it!=s.end();it++){
		//cout << (*it);
		//cout << *s.rend();
		nums1[x] = (*it);
		x++;
	}*/

	nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
	//cout << nums1.size();
	for(int q = 0;q<nums1.size();q++){
		cout <<nums1[q] <<" "<<count(nums,nums+n,nums1[q])<<endl;
	}
} 

