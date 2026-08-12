#include <bits/stdc++.h>
using namespace std;
 
int visited[100001];
vector<int> G[100001];
 
void dfs(int curr) {
  if(visited[curr]!=0) return;
  visited[curr] = 1;
  for(const int &next : G[curr])
    if(!visited[next])
      dfs(next);
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n, m, a, b;
  cin >> n >> m;
  for(int i=0; i<m; i++) {
    cin >> a >> b;
    G[a-1].push_back(b-1);
    G[b-1].push_back(a-1);
  }
  vector<int> A;
  for(int i=0; i<n; i++) {
    if(!visited[i]) {
      dfs(i);
      A.push_back(i+1);
    }
  }
  cout << A.size()-1 << "\n";
  for(int i=1; i<A.size(); i++)
    cout << A[i-1] << " " << A[i] << "\n";
  
  return 0;
}
