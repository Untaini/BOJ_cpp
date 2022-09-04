#include <cstdio>

int n,k,i,d[10000];
long long t,l=1,r=1ll<<32,m;

int main(){
    scanf("%d%d",&n,&k);
    for(i=0;i<n;++i)
        scanf("%d",&d[i]);
    while(l<=r){
        m=(l+r)/2,t=0;
        for(i=0;i<n;++i)
            t+=d[i]/m;
        if(t<k) r=m-1;
        else l=m+1;
    }
    printf("%d",r);
    return 0;
}
