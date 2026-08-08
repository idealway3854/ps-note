#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  if(n<=1) {
    cout << "1\n";
  } else if(n<=3) {
    cout << "NO SOLUTION\n";
  } else {
    int t = 2;
    for(int i=0; i<n; i++) {
      cout << t << " ";
      t += 2;
      if(t>n) t = 1;
    }
  }
  
  return 0;
}
