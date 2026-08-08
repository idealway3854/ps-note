#include <bits/stdc++.h>
using namespace std;
 
void print(const vector<int> &v) {
  cout << v.size() << "\n";
  for(const int &t : v)
    cout << t << " ";
  cout << "\n";
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  if(n%4==0) {
    vector<int> a, b;
    for(int i=1; i<=n; i+=4) {
      a.push_back(i), a.push_back(i+3);
      b.push_back(i+1), b.push_back(i+2);
    }
    cout << "YES\n";
    print(a);
    print(b);
  } else if(n%4==3) {
    vector<int> a{1, 2}, b{3};
    for(int i=4; i<=n; i+=4) {
      a.push_back(i), a.push_back(i+3);
      b.push_back(i+1), b.push_back(i+2);
    }
    cout << "YES\n";
    print(a);
    print(b);
  } else
    cout << "NO\n";
  
  return 0;
}
