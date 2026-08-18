#include <bits/stdc++.h>
using namespace std;

const int dx[] = {-1, -2, -2, -1, 1, 2, 2, 1}, dy[] = {-2, -1, 1, 2, 2, 1, -1, -2};

int n, d[1001][1001];

bool safe(int x, int y) {
  return 0<=x && x<n && 0<=y && y<n;
}

void bfs(int x, int y) {
  queue<pair<int, int>> Q;
  Q.push({x, y});
  d[x][y] = 0;
  while(!Q.empty()) {
    auto &[curr_x, curr_y] = Q.front(); Q.pop();
    for(int i=0; i<8; i++) {
      int next_x = curr_x+dx[i], next_y = curr_y+dy[i];
      if(safe(next_x, next_y) && d[next_x][next_y]>d[curr_x][curr_y]+1) {
        d[next_x][next_y] = d[curr_x][curr_y]+1;
        Q.push({next_x, next_y});
      }
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n;
  memset(d, 0x08, sizeof(d));
  bfs(0, 0);
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++)
      cout << d[i][j] << " ";
    cout << "\n";
  }
  
  return 0;
}
