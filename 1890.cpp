#include <cstdio>

int n,i,j,x;
long long d[110][110]={1};
int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i)
        for(j=0;j<n;++j){
            scanf("%d",&x);
            if(x)
                d[i][j+x]+=d[i][j], d[i+x][j]+=d[i][j];
        }
    printf("%lld",d[n-1][n-1]);

    return 0;
}
