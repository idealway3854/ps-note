#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ifstream fin("diamond.in");
  ofstream fout("diamond.out");
  int N, K;
  fin >> N >> K;
  vector<int> V(N);
  for(auto &t : V)
    fin >> t;
  sort(all(V));
  int ans = 0;
  for(int i=0, j=0; i<N; i++) {
    while(j<i && V[j]+K<V[i])
      j++;
    ans = max(ans, i-j+1);
  }
  fout << ans << "\n";
  
  return 0;
}
