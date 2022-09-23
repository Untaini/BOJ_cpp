#include <cstdio>

int d[15][15],k,n,t,i,j,l;

int main() {
    scanf("%d",&t);
    for(i=0;i<15;++i)
        d[0][i]=i;
    for(i=1;i<15;++i)
        for(j=0;j<15;++j)
            for(l=0;l<=j;++l)
                d[i][j] += d[i-1][l];

    for(i=0;i<t;++i){
        scanf("%d%d",&k,&n);
        printf("%d\n",d[k][n]);
    }
    return 0;
}
