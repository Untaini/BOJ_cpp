#include <cstdio>
#include <algorithm>
using namespace std;

#define ll long long

int n;
ll h[300000][2], l,r=1e12,m;

ll c(ll m){
    ll r=abs(h[n/2][0]-m)+abs(h[n/2][1]-m);
    for(int i=n/2+1;i<n;++i)
        ++m,r+=abs(h[i][0]-m)+abs(h[n-i-1][0]-m)+abs(h[i][1]-m)+abs(h[n-i-1][1]-m);
    return r;
}

int main() {
    scanf("%d",&n);
    for(int k=0;k<2;++k)
        for(int i=0;i<n;++i)
            scanf("%lld",&h[i][k]);

    while(l<=r){
        m=(l+r)/2;

        if(c(m)<c(m+1)) r=m-1;
        else l=m+1;
    }

    printf("%lld", c(l));
    return 0;
}
