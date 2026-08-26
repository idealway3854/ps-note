#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, x;
  cin >> n >> x;
  vector<int> c(n);
  for(auto &t : c)
    cin >> t;
  sort(all(c));
  vector<int> DT(x+1, INT_MAX);
  DT[x] = 0;
  for(int i=x-1; i>=0; i--)
    for(int j=0; j<n; j++)
      if(i+c[j]<=x && DT[i+c[j]]!=INT_MAX)
        DT[i] = min(DT[i], DT[i+c[j]]+1);
  cout << (DT[0]==INT_MAX?-1:DT[0]) << "\n";
  
  return 0;
}
