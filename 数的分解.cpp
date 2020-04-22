#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// �ж�ĳ������λ���Ƿ���� 2 �� 4 
bool judge(int n) {
	int t;
	while (n) {
		if (((t = n % 10) == 2) || t == 4) {
			return true;
		}
		n /= 10;
	}
	return false;
}

bool check(int a, int b, int c) {
	// �����ֳ��� 2 �� 4�����߳����ظ����֣����� 0 
	if (judge(a) || judge(b) || judge(c) || 
		a == b || a == c || b == c) {
		return false;
	}
	return true;
}

/**
 * ��һ��˼·��ֱ��ö�ٺ󽫽�� / 6
 */
int main() {
	int res = 0;
	for (int i = 1; i < 2018; i++) {
		for (int j = 1; j < 2018; j++) {
			for (int k = 1; k < 2018; k++) {
				if (i + j + k == 2019) {
					res += check(i, j, k);
				}
			}
		}
	}
	cout << (res / 6) << endl;
	return 0;
} 

