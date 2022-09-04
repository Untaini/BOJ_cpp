#include <cstdio>

long long pw[1<<20],c,x,d[1<<20];
int n,m,k,i,a,b;

void update(int t, long long v){
    v-=d[t], d[t]+=v;
    while(t<=n)
        pw[t]+=v, t+=t&-t;
}

long long sumOneToT(int t){
    long long result = 0;
    while(t)
        result+=pw[t], t-=t&-t;
    return result;
}

long long sumRange(int s, int e){
    return sumOneToT(e)-sumOneToT(s-1);
}

int main() {
    scanf("%d%d%d",&n,&m,&k);

    for(i=1;i<=n;++i){
        scanf("%lld",&x);
        update(i,x);
    }

    for(i=0;i<m+k;++i){
        scanf("%d%d%lld",&a,&b,&c);
        if(a==1)
            update(b,c);
        else
            printf("%lld\n", sumRange(b,c));
    }

    return 0;
}
