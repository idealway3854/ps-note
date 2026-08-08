#include <bits/stdc++.h>
using namespace std;
 
long long factorial(long long n) {
  if(n<=1) return 1;
  return factorial(n-1)*n;
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  vector<int> cnt(26);
  for(char &t : s)
    cnt[t-'a']++;
  long long res = 1;
  for(int i=0; i<26; i++)
    res *= factorial(cnt[i]);
  long long n = s.size();
  cout << factorial(n)/res << "\n";
  do {
    cout << s << "\n";
  } while(next_permutation(s.begin(), s.end()));
  
  return 0;
}
