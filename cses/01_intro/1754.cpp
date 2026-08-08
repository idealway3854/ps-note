#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t, a, b;
  cin >> t;
  for(int tc=1; tc<=t; tc++) {
    cin >> a >> b;
    string ans;
    if((2*a-b)%3==0 && (2*b-a)%3==0 && 2*a>=b && 2*b>=a)
      ans = "YES";
    else
      ans = "NO";
    cout << ans << "\n";
  }
  
  return 0;
}
