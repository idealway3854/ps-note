#include <bits/stdc++.h>
using namespace std;
 
int n, rd[21], c[21], ld[21];
char s[11][11];
 
int f(int i) {
  if(i>=n)
    return 1;
  int res = 0;
  for(int j=0; j<n; j++) {
    if(s[i][j]=='.' && !c[j] && !ld[i+j] && !rd[i-j+7]) {
      c[j] = ld[i+j] = rd[i-j+7] = 1;
      res += f(i+1);
      c[j] = ld[i+j] = rd[i-j+7] = 0;
    }
  }
  return res;
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  n = 8;
  for(int i=0; i<n; i++)
    cin >> s[i];
  cout << f(0) << "\n";
  
  return 0;
}
