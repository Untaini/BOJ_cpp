#include <cstdio>

int d[50][50],v[50][50],m,n,k,x,y,t,i,j,r,dx[]={1,-1,0,0},dy[]={0,0,1,-1};

bool g(int x, int y){
    return 0<=x&&x<m&&0<=y&&y<n;
}

void f(int x, int y){
    v[x][y]=1;
    for(int i=0;i<4;++i){
        int nx=x+dx[i],ny=y+dy[i];
        if(g(nx,ny)&&d[nx][ny]&&!v[nx][ny])
            f(nx,ny);
    }
}

int main() {
    scanf("%d",&t);
    for(i=0;i<t;++i){
        scanf("%d%d%d",&m,&n,&k);
        for(j=0;j<2500;++j)
            d[j/50][j%50]=v[j/50][j%50]=0;
        for(j=0;j<k;++j){
            scanf("%d%d",&x,&y);
            ++d[x][y];
        }
        r=0;
        for(j=0;j<2500;++j){
            x=j/50,y=j%50;
            if(d[x][y]&&!v[x][y]){
                f(x,y);
                ++r;
            }
        }
        printf("%d\n",r);
    }
}
