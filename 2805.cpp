#include <cstdio>

int n,k,d[1000000],l,r=2e9,m,i;
long long c;
int main() {
    scanf("%d%d",&n,&k);
    for(i=0;i<n;++i)
        scanf("%d",&d[i]);

    while(l<=r){
        m=(l+r)/2,c=0;
        for(i=0;i<n;++i)
            if(d[i]>m) c+=d[i]-m;
        c<k?r=m-1:l=m+1;
    }
    printf("%d",r);
    return 0;
}
