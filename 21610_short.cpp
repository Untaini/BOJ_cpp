#include <cstdio>
int d[50][50],b[50][50],a[50][50],n,m,e,s,x,r,c,t,u,i,j,k,nr,nc,mr,mc;
int dr[] = {0,-1,-1,-1,0,1,1,1} ,dc[] = {-1,-1,0,1,1,1,0,-1};
bool ch(int r,int c){return 0<=r&&r<n&&0<=c&&c<n;}
int main() {
    scanf("%d%d",&n,&m);k=n*n;
    for(j=0;j<k;++j){
        scanf("%d",&x);
        d[j/n][j%n]=x;
    }
    b[n-1][0]=b[n-1][1]=b[n-2][0]=b[n-2][1]=1;
    for(i=0;i<m;++i){
        scanf("%d%d",&e,&s);--e,mr=s*dr[e],mc=s*dc[e];
        for(int j=0;j<k;++j)
            r=j/n,c=j%n,nr=(25*n+r+mr)%n,nc=(25*n+c+mc)%n,a[nr][nc]=b[r][c],d[nr][nc] += a[nr][nc];
        for(j=0;j<k;++j)
            for(t=1;t<8;t+=2)
                r=j/n,c=j%n,d[r][c]+=a[r][c]&&ch(r+dr[t],c+dc[t])&&!!d[r+dr[t]][c+dc[t]];
        for(j=0;j<k;++j)
            r=j/n,c=j%n,d[r][c]>=2&&!a[r][c]?d[r][c]-=2,b[r][c]=1:b[r][c]=0;
    }
    for(j=0;j<k;++j)u+=d[j/n][j%n];
    printf("%d",u);
    return 0;
}
