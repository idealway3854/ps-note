#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ifstream fin("lostcow.in");
  ofstream fout("lostcow.out");
  int x, y;
  fin >> x >> y;
  int past = -1, curr = x, d = 1, w = 1, ans = 0;
  while(1) {
    if((d==1 && x<=y && y<=x+d*w) || (d==-1 && x+d*w<=y && y<=x)) {
      ans += abs(y-curr);
      break;
    }
    past = curr;
    curr = x+w*d;
    ans += abs(past-curr);
    w *= 2;
    d *= -1;
  }
  fout << ans << "\n";
  
  return 0;
}
