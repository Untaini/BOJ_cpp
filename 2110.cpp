#include <cstdio>
#include <algorithm>
using namespace std;

int n,c,d[200000],l,r=1e9,m,t,cur;
int main() {
    scanf("%d%d",&n,&c);
    for(int i=0;i<n;++i)
        scanf("%d",&d[i]);

    sort(d,d+n);

    while(l<=r){
        m=(l+r)/2,t=1,cur=d[0];
        for(int i=1;i<n;++i)
            if(m<=d[i]-cur)
                cur=d[i],++t;

        if(t<c) r=m-1;
        else l=m+1;
    }

    printf("%d",r);
    return 0;
}


