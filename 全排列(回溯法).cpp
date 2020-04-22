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

/*·�����Ѿ�������ѡ��
ѡ���б���ǰ����������ѡ��*/ 
/* 
result = []
def backtrack(·��, ѡ���б�):
    if �����������:
        result.add(·��)
        return
    
    for ѡ�� in ѡ���б�:
        ��ѡ��
        backtrack(·��, ѡ���б�)
        ����ѡ��

���ߣ�labuladong
���ӣ�https://leetcode-cn.com/problems/permutations/solution/hui-su-suan-fa-xiang-jie-by-labuladong-2/
��Դ�����ۣ�LeetCode��
����Ȩ���������С���ҵת������ϵ���߻����Ȩ������ҵת����ע��������
*/ 
