#include<bits/stdc++.h>
using namespace std;

int main(){
  int sum = 0;
  for(int a = 1;a<=4;a++){
    for(int b = 1;b<=4;b++){
      for(int c = 1;c<=4;c++){
        for(int d = 1;d<=4;d++){
          for(int e = 1;e<=4;e++){
            for(int f = 1;f<=4;f++){
              if((a!=b&&a!=c&&a!=f)&&
                 (b!=c)&&
                 (c!=f&&c!=d)&&
                 (d!=e&&d!=f)&&(e!=f)){
                   sum++;
                   cout << a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<endl;
                 }

            }
          }
        }
      }
    }
  }
  cout << sum;
}
