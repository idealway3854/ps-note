#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x;
  cin >> n >> x;
  vector<int> p(n);
  for(int i=0; i<n; i++)
    cin >> p[i];
  sort(all(p), [](int a, int b){ return a>b; });
  int ans = 0;
  for(int i=0; i<n; i++) {
    if(p[i]+p.back()<=x) {
      n -= 1;
      p.pop_back();
    }
    ans++;
  }
  cout << ans << "\n";
  
  return 0;
}
