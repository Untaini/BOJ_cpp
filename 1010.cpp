#include <cstdio>

int d[31][31],i,j,t,n,m;
int main(){
    for(i=1;i<=30;++i)
        d[1][i]=i;
    for(i=2;i<=30;++i)
        for(j=i;j<=30;++j)
            d[i][j] = d[i-1][j-1]+d[i][j-1];
    scanf("%d",&t);
    for(i=0;i<t;++i){
        scanf("%d%d",&n,&m);
        printf("%d\n",d[n][m]);
    }
}
