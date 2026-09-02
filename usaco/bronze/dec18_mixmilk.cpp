#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ifstream fin("mixmilk.in");
  ofstream fout("mixmilk.out");
  int n = 3;
  vector<int> c(n), m(n);
  for(int i=0; i<n; i++)
    fin >> c[i] >> m[i];
  for(int i=0; i<100; i++) {
    int p = i%3, q = (i+1)%3;
    int t = min(m[p], c[q]-m[q]);
    m[p] -= t;
    m[q] += t;
  }
  for(const auto &t : m)
    fout << t << "\n";
  
  return 0;
}
