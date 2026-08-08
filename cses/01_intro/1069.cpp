#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  char c = s[0];
  int l = 0, ans = 0;
  for(const char &t : s) {
    if(c==t) {
      l += 1;
      ans = max(ans, l);
    } else {
      l = 1;
      c = t;
    }
  }
  cout << ans << "\n";
  
  return 0;
}
