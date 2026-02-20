#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t,a,b,c,problem = 0;
  cin>>t;
  while(t--){
    cin>>a>>b>>c;
    if ((a==1&&b==1) || (a==1&&c==1) || (b==1&&c==1) || (a==1&&b==1&&c==1)) {
      problem++;
    } 
  }
  cout << problem << endl;
}
