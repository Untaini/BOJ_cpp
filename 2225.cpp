#include <cstdio>

int d[201][201];
int n,k;
int main() {
    scanf("%d%d",&n,&k);

    //d[0][0] = 1;
    for(int i=0;i<=n;++i)
        d[1][i] = 1;

    for(int i=2;i<=k;++i){
        for(int j=0;j<=n;++j) {
            for(int l=j;l<=n;++l) {
                d[i][l] += d[i-1][l-j];
                d[i][l] %= 1000000000;
            }
        }
    }
    printf("%d", d[k][n]);
    return 0;
}
