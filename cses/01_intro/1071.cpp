#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t, y, x;
  cin >> t;
  for(int i=0; i<t; i++) {
    cin >> y >> x;
    long long r, s, e;
    r = max(y, x), s = (r-1)*(r-1)+1, e = r*r;
    long long res = -1;
    if(r%2==0)
      res = (x==r)?s+(y-1):e-(x-1);
    else
      res = (x==r)?e-(y-1):s+(x-1);
    cout << res << "\n";
  }
  
  return 0;
}
