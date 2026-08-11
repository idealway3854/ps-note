#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  deque<int> DQ;
  for(int i=1; i<=n; i++)
    DQ.push_back(i);
  for(int i=1; i<=n; i++) {
    DQ.push_back(DQ.front());
    DQ.pop_front();
    cout << DQ.front() << " ";
    DQ.pop_front();
  }
  
  return 0;
}
