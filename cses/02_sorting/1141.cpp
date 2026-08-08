#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> k(n);
  for(int &t : k)
    cin >> t;
  map<int, int> M;
  int ans = 0;
  for(int i=0, j=0; i<n; i++) {
    M[k[i]] += 1;
    while(M[k[i]]>=2) {
      M[k[j]] -= 1;
      j++;
    }
    ans = max(ans, i-j+1);
  }
  cout << ans << "\n";
  
  return 0;
}
