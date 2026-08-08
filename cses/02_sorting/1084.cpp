#include <bits/stdc++.h>
using namespace std;
 
void vi(vector<int> &v) {
  for(int &t : v)
    cin >> t;
  sort(v.begin(), v.end());
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, k;
  cin >> n >> m >> k;
  vector<int> a(n), b(m);
  vi(a); vi(b);
  int ans = 0, j = 0;
  for(int i=0; i<n; i++) {
    while(j<m && b[j]<a[i]-k)
      j++;
    if(a[i]-k<=b[j] && b[j]<=a[i]+k) {
      ans++;
      j++;
    }
  }
  cout << ans << "\n";
 
  return 0;
}
