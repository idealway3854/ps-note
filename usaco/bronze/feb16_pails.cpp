#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ifstream fin("pails.in");
  ofstream fout("pails.out");
  int X, Y, M;
  fin >> X >> Y >> M;
  int ans = 0;
  for(int i=0; i<=M/X; i++) {
    for(int j=0; j<=M/Y; j++) {
      if(X*i+Y*j>M)
        break;
      ans = max(ans, X*i+Y*j);
    }
  }
  fout << ans << "\n";
  
  return 0;
}
