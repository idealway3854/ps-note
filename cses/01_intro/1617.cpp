#include <bits/stdc++.h>
using namespace std;
 
long long mod = 1e9+7;
 
long long f(int n) {
  if(n<=0) return 1L;
  return f(n-1)*2%mod;
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  cout << f(n) << "\n";
  
  return 0;
}
