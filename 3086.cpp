#include <cstdio>
#include <algorithm>
using namespace std;

int d[1001][1001],n,m;


int main() {
    for(int i=1;i<=1000;++i)
        for(int j=1;j<=1000;++j)
            d[i][j] =1e8;

    for(int i=1;i<=1000;++i)
        d[i][i]=1;
    scanf("%d%d",&n,&m);

    for(int i=1;i<=1000;++i)
        for(int j=i+1;j<=1000;++j)s
            d[i][j] = d[j][i] = min(d[j][i], d[j-i][i]+1);

    printf("%d",res(n,m));
    return 0;
}
