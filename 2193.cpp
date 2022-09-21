#include <cstdio>

long long d[2][100];
int n,i;
int main() {
    d[1][1]=1;
    for(i=2;i<100;++i)
        d[0][i] = d[0][i-1]+d[1][i-1], d[1][i] = d[0][i-1];

    scanf("%d",&n);
    printf("%lld",d[0][n+1]);
}
