#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, t;
  cin >> n >> m;
  map<int, int> M;
  for(int i=0; i<n; i++) {
    cin >> t;
    M[t]++;
  }
  for(int i=0; i<m; i++) {
    cin >> t;
    auto it = M.upper_bound(t);
    if(it==M.begin())
      cout << "-1\n";
    else {
      it--;
      if(it->first>t)
        cout << "-1\n";
      else {
        cout << it->first << "\n";
        it->second--;
        if(it->second==0)
          M.erase(it);
      }
    }
  }
  
  return 0;
}
