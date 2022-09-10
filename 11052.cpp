#include <cstdio>
int d[1001],p[1001],n,k;
int main() {
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
        scanf("%d",&p[i]);
    for(int i=1;i<=n;++i)
        for(int j=i;j<=n;++j)
            if(d[j]<(k=d[j-i]+p[i])) d[j]=k;
    printf("%d",d[n]);
}
