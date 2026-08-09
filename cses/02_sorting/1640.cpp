#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  map<int, vector<int>> M;
  for(int i=0; i<n; i++) {
    cin >> a[i];
    M[a[i]].push_back(i+1);
  }
  for(int &t : a) {
    if(x!=2*t && M.find(x-t)!=M.end() && !M[x-t].empty()) {
      cout << M[t][0] << " " << M[x-t][0] << "\n";
      return 0;
    }
    if(x==2*t && M.find(x-t)!=M.end() && M[x-t].size()>=2) {
      cout << M[t][0] << " " << M[t][1] << "\n";
      return 0;
    }
  }
  cout << "IMPOSSIBLE\n";
  
  return 0;
}
