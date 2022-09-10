#include <cstdio>

int d[10000],k,n,t,i,p;
long long l=1,r,m;
int main(){
    scanf("%d%d",&k,&n);
    for(i=0;i<k;++i) {
        scanf("%d",&d[i]);
        r=r>d[i]?r:d[i];
    }
    while(l<=r){
        m=(l+r)/2,t=0;
        for(i=0;i<k;++i)
            t+=d[i]/m;
        if(t<n) r=m-1;
        else l=m+1;
    }
    printf("%lld",r);
}
