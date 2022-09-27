#include <cstdio>

int d[1002][10]={1},n,i,j,k;
int main() {
    scanf("%d",&n);
    for(i=1;i<=n+1;++i){
        d[i][0]=1;
        for(j=1;j<10;++j)
            d[i][j] = (d[i][j-1] + d[i-1][j])%10007;
    }
    printf("%d",d[n+1][9]);
    return 0;
}
