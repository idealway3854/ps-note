#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<long long> x(n);
  for(long long &t : x)
    cin >> t;
  long long ans = x[0];
  vector<long long> DT(n);
  DT[0] = x[0];
  for(int i=1; i<n; i++) {
    DT[i] = max(x[i], DT[i-1]+x[i]);
    ans = max(ans, DT[i]);
  }
  cout << ans << "\n";
  
  return 0;
}
