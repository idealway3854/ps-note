#include <bits/stdc++.h>
using namespace std;
 
void f(int n, int a, int b, int c) {
  if(n==0) return;
  f(n-1, a, c, b);
  cout << a << " " << c << "\n";
  f(n-1, b, a, c);
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  cout << (1L<<n)-1 << "\n";
  f(n, 1, 2, 3);
  
  return 0;
}
