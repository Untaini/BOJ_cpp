#include <cstdio>
int d[201],m,n,k,t;
int main() {
    scanf("%d%d%d",&n,&m,&k);
    t = n/2<m?n/2:m;
    for(int i=1;i<=n+m;++i)
        if(i%3==0 && i/3<=t) d[i] = d[i-3]+1;
        else d[i] = d[i-1];
    printf("%d",d[n+m-k]);
}
