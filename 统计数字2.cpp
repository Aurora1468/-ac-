/*#include<cstdio>
#include<iostream> 
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main(){
	int m,temp;
	cin >> m;
	int x[2][2] = {0,0,0,0};
	vector<vector<int> > num(2);
	while(m>0){
		cin >> temp;
		if(count(num[0].begin(),num[0].end(),temp)==0){
			num[0].push_back(temp);
			num[1].push_back(1);
		}
		else 
			num[1][find(num[0].begin(),num[0].end(),temp)-num[0].begin()]++;
		m--;
	}
	
	for(int i = 0;i<num[0].size();i++){
		cout << num[0][i] << " " << num[1][i]<<endl;
	}
} */
#include<iostream>
#include<algorithm>
using namespace std;
struct test {
	int a;
	int b;
};
bool com(test , test );
int main()
{
	int n,temp,m=0;
	cin >> n;
	struct test* count = new struct test[n]();
	for (int i = 0; i < n; i++)
	{
		int find = 1;
		cin >> temp;
		for (int j = 0; j <= i; j++)
		{
			if (count[j].a == temp)
			{
				count[j].b++;
				find = 0;
			}
		}
		if (find)
		{
			count[m].a = temp;
			count[m++].b++;
		}
	}
	sort(count, count + m, com);
	for (int i = 0; i < m; i++)
	{
		cout << count[i].a << " " << count[i].b << endl;
	}
	return 0;
}
bool com(test x,  test y)
{
	if (x.a == y.a)
		return x.b < y.b;
	return x.a < y.a;
}

