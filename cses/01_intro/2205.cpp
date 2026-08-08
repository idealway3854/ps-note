#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  vector<string> V;
  for(int i=0; i<n; i++) {
    for(int j=0; j<i; j++)
      V[j] += string(V[j].rbegin(), V[j].rend());
    V.push_back(string(1<<i, '0')+string(1<<i, '1'));
  }
  for(int i=0; i<(1<<n); i++) {
    for(int j=0; j<n; j++)
      cout << V[j][i];
    cout << "\n";
  }
  
  return 0;
}
