#include <cstdio>

long long t[1<<20];
int d[1<<20],n,m,i,j,k;

long long get(int x){
    long long r=0;
    while(x)
        r+=t[x],x-=x&-x;
    return r;
}

void update(int x, int dif){
    while(x<=n)
        t[x]+=dif,x+=x&-x;
}

long long getr(int a, int b){
    a=a>0?a:1, b=b<=n?b:n;
    return a>b?getr(b,a):get(b)-get(a-1);
}

int main() {
    scanf("%d%d",&n,&m);
    for(int c=0;c<m;++c){
        scanf("%d%d%d",&i,&j,&k);
        if(i) {
            update(j,k-d[j]);
            d[j]=k;
        }
        else printf("%lld\n",getr(j,k));
    }
    return 0;
}
