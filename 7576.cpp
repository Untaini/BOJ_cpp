#include <cstdio>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;

int d[1001][1001], n,m, dr[]={1,-1,0,0},dc[]={0,0,1,-1};
queue<tuple<int, int>> q;

bool check(int r, int c){
    return 0<=r&&r<n&&0<=c&&c<m;
}

int main() {
    scanf("%d%d",&m,&n);
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j){
            scanf("%d",&d[i][j]);
            if(d[i][j]==1)
            q.push({i,j});
        }

    while(!q.empty()){
        auto [r,c] = q.front(); q.pop();

        for(int i=0;i<4;++i){
            int nr=r+dr[i], nc=c+dc[i];
            if(check(nr,nc) && !d[nr][nc]){
                d[nr][nc] = d[r][c]+1;
                q.push({nr,nc});
            }
        }
    }

    int res=0;
    bool ch=true;
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            res=max(res,d[i][j]),ch&=d[i][j]!=0;
    printf("%d",ch?res-1:-1);
    return 0;
}
