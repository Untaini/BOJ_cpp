#include <cstdio>
#define min(a,b) (a<b?a:b)
int d[101][101],n,m,a,b,i,j,k,r,x=101,s;
int main() {
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)
            d[i][j] = i==j?0:x;

    for(i=0;i<m;++i){
        scanf("%d%d",&a,&b);
        d[a][b]=d[b][a]=1;
    }

    for(k=1;k<=n;++k)
        for(i=1;i<=n;++i)
            for(j=1;j<=n;++j)
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);

    for(i=1;i<=n;++i){
        s=0;
        for(j=1;j<=n;++j)
            s+=d[i][j];
        if(s<x) r=i,x=s;
    }
    printf("%d",r);
    return 0;
}
