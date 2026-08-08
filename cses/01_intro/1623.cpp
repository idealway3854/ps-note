#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> p(n);
  for(int &t : p)
    cin >> t;
  long long ans = LLONG_MAX;
  for(int i=0; i<(1<<n); i++) {
    long long a = 0, b = 0;
    for(int j=0; j<n; j++) {
      if(i&(1<<j))
        a += p[j];
      else
        b += p[j];
    }
    ans = min(ans, abs(a-b));
  }
  cout << ans << "\n";
  
  return 0;
}
