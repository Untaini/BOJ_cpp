#include <cstdio>

int n,k,c,d[1001];

void f(int t){
    if(d[t]) return;
    d[t] = 1;
    if(++c == k) printf("%d",t);
}

int main() {
    scanf("%d%d",&n,&k);
    for(int i=2;i<=n;++i) {
        f(i);
        for(int j=i*i;j<=n;j+=i)
            f(j);
    }
    return 0;
}
