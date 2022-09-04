#include <cstdio>

int n,m,r[2],i,j,dx[]={1,-1,0,0},dy[]={0,0,1,-1};
char d[100][101];
bool v[100][100];

bool c(int x, int y){
    return 0<=x&&x<n&&0<=y&&y<m;
}

int dfs(int x, int y){
    if(v[x][y]) return 0;

    v[x][y]=1;
    int r=1,nx,ny;
    for(int i=0;i<4;++i){
        nx=x+dx[i],ny=y+dy[i];
        if(c(nx,ny)&&!v[nx][ny]&&d[x][y]==d[nx][ny])
            r+=dfs(nx,ny);
    }
    return r;
}

int main() {
    scanf("%d%d\n",&m,&n);
    for(i=0;i<n;++i)
        scanf("%s",&d[i]);

    for(i=0;i<n;++i)
        for(j=0;j<m;++j){
            int t=dfs(i,j);
            r[d[i][j]=='B']+=t*t;
        }
    printf("%d %d",r[0],r[1]);
    return 0;
}
