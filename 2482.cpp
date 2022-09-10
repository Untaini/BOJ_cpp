#include <cstdio>

int d[1001][1001],n,k;
int main() {
    scanf("%d%d",&n,&k);
    d[0][0] = d[1][0] = d[1][1] = 1;
    for(int i=2;i<n;++i) {
        d[i][0] = 1;
        for(int j=1;j<=i;++j)
            d[i][j] = (d[i-1][j] + d[i-2][j-1])%1000000003;
    }
    printf("%d",(d[n-3][k-1]+d[n-1][k])%1000000003);
}
