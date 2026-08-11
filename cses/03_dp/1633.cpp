#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<int> DT(n+1);
  DT[0] = 1;
  for(int i=1; i<=n; i++)
    for(int j=1; j<=6; j++)
      if(i>=j)
        DT[i] = (DT[i]+DT[i-j])%mod;
  cout << DT[n] << "\n";
  
  return 0;
}
