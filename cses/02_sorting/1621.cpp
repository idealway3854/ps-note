#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, t;
  cin >> n;
  set<int> S;
  for(int i=0; i<n; i++) {
    cin >> t;
    S.insert(t);
  }
  cout << S.size() << "\n";
  
  return 0;
}
