#include <bits/stdc++.h>
using namespace std;

int visited[100001], dist[100001];
vector<int> G[100001];

int bfs(const int &A, const int &B) {
  queue<int> Q;
  Q.push(A);
  memset(dist, 0x08, sizeof(dist));
  dist[A] = visited[A] = 1;
  int res = -1;
  while(!Q.empty()) {
    int curr = Q.front(); Q.pop();
    if(curr==B) {
      res = dist[curr];
      break;
    }
    for(const int &next : G[curr]) {
      if(!visited[next] && dist[next]>dist[curr]+1) {
        dist[next] = dist[curr]+1, visited[next] = 1;
        Q.push(next);
      }
    }
  }
  return res;
}

string rbfs(const int &B, const int &A) {
  queue<int> Q;
  Q.push(B);
  vector<int> path;
  while(!Q.empty()) {
    int curr = Q.front(); Q.pop();
    if(curr==A) {
      path.push_back(curr+1);
      break;
    }
    for(int &next : G[curr]) {
      if(dist[curr]==dist[next]+1) {
        path.push_back(curr+1);
        Q.push(next);
        break;
      }
    }
  }
  string res;
  for(auto it=path.rbegin(); it!=path.rend(); it++)
    res += to_string(*it)+" ";
  return res;
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
  int ans = bfs(0, n-1);
  if(ans==-1)
    cout << "IMPOSSIBLE\n";
  else
    cout << ans << "\n" << rbfs(n-1, 0) << "\n";
  
  return 0;
}
