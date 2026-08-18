#include <bits/stdc++.h>
using namespace std;
 
int n, m, a, b;
vector<int> visited, G[200001];
 
int bfs(int s) {
  queue<int> Q;
  Q.push(s);
  visited[s] = 1;
  while(!Q.empty()) {
    int curr = Q.front(); Q.pop();
    for(int &next : G[curr]) {
      if(!visited[next]) {
        visited[next] = ~visited[curr];
        Q.push(next);
      } else if(visited[curr]==visited[next])
        return 1;
    }
  }
  return 0;
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n >> m;
  for(int i=0; i<m; i++) {
    cin >> a >> b;
    G[a-1].push_back(b-1);
    G[b-1].push_back(a-1);
  }
  visited.resize(n);
  for(int i=0; i<n; i++) {
    if(!visited[i] && bfs(i)) {
      cout << "IMPOSSIBLE\n";
      return 0;
    }
  }
  for(const int &t : visited)
    cout << abs(t) << " ";
  cout << "\n";
  
  return 0;
}