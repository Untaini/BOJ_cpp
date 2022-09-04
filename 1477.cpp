#include <cstdio>
#include <algorithm>
using namespace std;

int n,t,s,l,r,m,d[52],i,u;

int main() {
    scanf("%d%d%d",&n,&t,&s);
    for(i=1;i<=n;++i)
        scanf("%d",&d[i]);
    sort(d+1,d+(++n));
    l=1,r=d[n]=s;
    while(l<=r){
        m=(l+r)/2,u=0;

        for(i=0;i<n;++i)
            if(d[i+1]-d[i]>m)
                u+=(d[i+1]-d[i])/m-((d[i+1]-d[i])%m?0:1);

        if(u<=t) r=m-1;
        else l=m+1;
    }
    printf("%d",l);
    return 0;
}
