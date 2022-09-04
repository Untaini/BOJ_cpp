#include <cstdio>
long long l,r=2e9,m,n,k,i,t,d[1000000];
int main() {
    scanf("%d%d",&n,&k);
    for(i=0;i<n;++i)
        scanf("%d",&d[i]);
    while(l<=r){
        m=(l+r)/2,t=0;
        for(i=0;i<n;++i)
            if(d[i]<m)
                t+=m-d[i];
        if(t>k) r=m-1;
        else l=m+1;
    }
    printf("%d",r);
    return 0;
}
