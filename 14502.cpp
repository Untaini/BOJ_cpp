#include <cstdio>
#include <queue>
#include <algorithm>
#include <tuple>
using namespace std;

int n,m,o[8][8],c[8][8],dx[]={1,-1,0,0},dy[]={0,0,1,-1},w[3];
queue<tuple<int, int>> q;

bool ck(int x,int y){
    return 0<=x&&x<n&&0<=y&&y<m;
}

int f(int t, int k){
    int r=0;
    if(t==3){
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                if((c[i][j]=o[i][j])==2)
                    q.push({i,j});

        for(int i=0;i<3;++i)
            c[w[i]/m][w[i]%m] = 1;

        int x,y;
        while(!q.empty()){
            auto[x,y] = q.front(); q.pop();
            for(int i=0;i<4;++i){
                int nx=x+dx[i],ny=y+dy[i];
                if(ck(nx,ny) && !c[nx][ny]){
                    c[nx][ny]=2;
                    q.push({nx,ny});
                }
            }
        }

        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                r+=!c[i][j];

        return r;
    }
    else{
        while(k<n*m){
            if(!o[k/m][k%m]){
                w[t]=k;
                r = max(r, f(t+1,k+1));
            }
            ++k;
        }

    }
    return r;
}

int main() {
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            scanf("%d",&o[i][j]);

    printf("%d",f(0,0));
    return 0;
}
