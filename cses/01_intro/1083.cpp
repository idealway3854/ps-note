#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, t, i;
  cin >> n;
  vector<int> a(n, 0);
  for(i=0; i<n-1; i++) {
    cin >> t;
    a[t-1] = 1;
  }
  for(i=0; i<n && a[i]!=0; i++);
  cout << i+1 << "\n";
  
  return 0;
}
