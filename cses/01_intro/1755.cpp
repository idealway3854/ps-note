#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s;
  cin >> s;
  vector<int> cnt(26);
  for(char &t : s)
    cnt[t-'A']++;
  string l, m;
  bool chk = false;
  for(int i=0; i<26; i++) {
    if(cnt[i]%2==0) {
      l += string(cnt[i]/2, 'A'+i);
      continue;
    }
    if(!m.empty()) {
      chk = true;
      break;
    }
    m = string(cnt[i], 'A'+i);
  }
  string r(l.rbegin(), l.rend());
  cout << ((!chk)?l+m+r:"NO SOLUTION") << "\n";
  
  return 0;
}
