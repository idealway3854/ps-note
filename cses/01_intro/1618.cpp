#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int a = 0, b = 0;
  for(int i=2; i<=n; i*=2)
    a += n/i;
  for(int i=5; i<=n; i*=5)
    b += n/i;
  cout << min(a, b) << "\n";
  
  return 0;
}
