#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int n;
void backtrack(vector<int> num,vector<int> nums){
	if(num.size() == n){
		for(int i = 0;i<n;i++)
			cout <<num[i];
		cout << endl;
		return;
	}
	for(int x = 0;x<nums.size();x++){
		if(count(num.begin(),num.end(),nums[x])!=0)
			continue;
		num.push_back(nums[x]);
		backtrack(num,nums);
		num.pop_back();
	}
	
}
int main(){
	cin >> n;
	vector<int> num,nums;
	for(int i = 1;i<=n;i++)
		nums.push_back(i);
	backtrack(num,nums);
} 

/*路径：已经做过的选择
选择列表：当前可以做出的选择*/ 
/* 
result = []
def backtrack(路径, 选择列表):
    if 满足结束条件:
        result.add(路径)
        return
    
    for 选择 in 选择列表:
        做选择
        backtrack(路径, 选择列表)
        撤销选择

作者：labuladong
链接：https://leetcode-cn.com/problems/permutations/solution/hui-su-suan-fa-xiang-jie-by-labuladong-2/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/ 
