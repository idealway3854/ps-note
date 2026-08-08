#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  for(int i=1; i<=n; i++) {
    long long t = i*i;
    cout << t*(t-1)/2-4*(i-1)*(i-2) << "\n";
  }
  
  return 0;
}
