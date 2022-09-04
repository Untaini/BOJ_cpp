#include <cstdio>

long long d[1025][1025];
int n,m;

int main() {
    scanf("%d%d",&n,&m);

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++) {
            int x;
            scanf("%d",&x);
            d[i][j] = d[i][j-1] + d[i-1][j] - d[i-1][j-1] + x;
        }

    for(int i=0;i<m;i++) {
        int x1,y1,x2,y2;
        scanf("%d%d%d%d", &x1,&y1,&x2,&y2);
        printf("%lld\n", d[x2][y2] - d[x1-1][y2] - d[x2][y1-1] + d[x1-1][y1-1]);
    }

    return 0;
}
