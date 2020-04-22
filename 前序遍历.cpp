#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  for(int i = 1;i<n;i++){
    string temp;
    cin >> temp;
    int x = s.find(temp[0]);
    s.erase(x,1);
    s.insert(x,temp);
  }
  for(int i = 0;i<s.length();i++){
    if(s[i] == '*'){
      s.erase(i,1);
      i--;
    }
  }
  cout << s;
}
