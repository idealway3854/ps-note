#include <bits/stdc++.h>
#define all(v) v.begin(), v.end()
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  ifstream fin("shell.in");
  ofstream fout("shell.out");
  int n;
  fin >> n;
  vector<int> peb(3), cnt(3);
  for(int i=0; i<3; i++)
    peb[i] = i;
  int a, b, g;
  for(int i=0; i<n; i++) {
    fin >> a >> b >> g;
    swap(peb[a-1], peb[b-1]);
    cnt[peb[g-1]]++;
  }
  fout << *max_element(all(cnt)) << "\n";
  
  return 0;
}
