#include <cstdio>

int min(int a, int b){
    return a<b?a:b;
}

int d[100001], c[100], n, k;
int main() {
    scanf("%d%d",&n,&k);
    for(int i=0;i<=10000;++i) d[i] = (1<<21);
    for(int i=0;i<n;++i) {
        scanf("%d",&c[i]);
        d[c[i]] = 1;
    }
    for(int i=0;i<n;++i)
        for(int j=c[i];j<=10000;++j)
            d[j] = min(d[j-c[i]]+1, d[j]);
    printf("%d",d[k]!=(1<<21)?d[k]:-1);
}
