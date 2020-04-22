#include<bits/stdc++.h>
using namespace std;

long long ksm(int a,int b){
  long long ret = 1;
  while(b>0){
    if(b&1){
      ret = ret*a;
    }
    a = a*a;
    b = b>>1;
  }
  return ret;
}
int main(){
  int n;
  cin >> n;
  for(int a = 0;a<=sqrt(n);a++){
    for(int b = a;b<=sqrt(n);b++){
      for(int c = b;c<=sqrt(n);c++){
        int d = n - a*a-b*b-c*c;
            if(n == ksm(a,2) + ksm(b,2) + ksm(c,2) + ksm(d,2)){
              int num[4];
              num[0] = a;
              num[1] = b;
              num[2] = c;
              num[3] = d;
              sort(num,num + 4);
              for(int i = 0;i<4;i++){
                cout << num[i]<<" ";
              }

              return 0;
            }
      }
    }
  }
}
