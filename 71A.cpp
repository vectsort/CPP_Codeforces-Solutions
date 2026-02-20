#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int t,remain,count;
  string s;
  cin>>t;
  for (int i = 1; i <= t; i++) {
    cin>>s;
    if (s.length() <= 10) {
      cout << s << endl;
    } else {
      count = s.length();
      remain = s.length() - 2;
      cout << s[0] << remain << s[s.length() - 1] << endl;
    }
  }
}
