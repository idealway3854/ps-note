#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;
using pii = pair<int, int>;
 
const int dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
const char sbl[] = {'L', 'R', 'U', 'D'};
 
int n, m, visited[1001][1001], dist[1001][1001];
char s[1001][1001];
 
bool safe(int x, int y) {
  return 0<=x && x<n && 0<=y && y<m;
}
 
int bfs(const pii &A, const pii &B) {
  queue<pii> Q;
  Q.push(A);
  dist[A.X][A.Y] = 0;
  int res = -1;
  while(!Q.empty()) {
    auto &[cx, cy] = Q.front(); Q.pop();
    if(cx==B.X && cy==B.Y) {
      res = dist[cx][cy];
      break;
    }
    for(int i=0; i<4; i++) {
      int nx = cx+dx[i], ny = cy+dy[i];
      if(safe(nx, ny) && s[nx][ny]!='#' && dist[nx][ny]>dist[cx][cy]+1) {
        dist[nx][ny] = dist[cx][cy]+1;
        Q.push({nx, ny});
      }
    }
  }
  return res;
}
 
string rbfs(const pii &B, const pii &A) {
  queue<pii> Q;
  Q.push(B);
  string res = "";
  while(!Q.empty()) {
    auto &[cx, cy] = Q.front(); Q.pop();
    if(cx==A.X && cy==A.Y)
      break;
    for(int i=0; i<4; i++) {
      int nx = cx+dx[i], ny = cy+dy[i];
      if(safe(nx, ny) && s[nx][ny]!='#' && dist[cx][cy]==dist[nx][ny]+1) {
        res += sbl[i];
        Q.push({nx, ny});
        break;
      }
    }
  }
  return string(res.rbegin(), res.rend());
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n >> m;
  pii A, B;
  for(int i=0; i<n; i++) {
    cin >> s[i];
    for(int j=0; j<m; j++) {
      if(s[i][j]=='A') A = {i, j};
      if(s[i][j]=='B') B = {i, j};
    }
  }
  memset(dist, 0x08, sizeof(dist));
  int ans = bfs(A, B);
  if(ans==-1)
    cout << "NO\n";
  else
    cout << "YES\n" << ans << "\n" << rbfs(B, A) << "\n";
  
  return 0;
}
