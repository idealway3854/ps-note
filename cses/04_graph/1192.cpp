#include <bits/stdc++.h>
using namespace std;
 
int n, m, visited[1001][1001], dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
char s[1001][1001];
 
bool safe(int x, int y) {
  return 0<=x && x<n && 0<=y && y<m;
}
 
void dfs(int x, int y) {
  if(visited[x][y]!=0) return;
  visited[x][y] = 1;
  for(int i=0; i<4; i++) {
    int nx = x+dx[i], ny = y+dy[i];
    if(safe(nx, ny) && s[nx][ny]!='#')
      dfs(nx, ny);
  }
}
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n >> m;
  for(int i=0; i<n; i++)
    cin >> s[i];
  int ans = 0;
  for(int i=0; i<n; i++)
    for(int j=0; j<m; j++)
      if(s[i][j]=='.' && visited[i][j]==0)
        dfs(i, j), ans++;
  cout << ans << "\n";
  
  return 0;
}
