#include <cstdio>
#include <algorithm>
using namespace std;

int n, d[100000];
long long left, right=1e9, mid1, mid2, res=1e14;

long long cost(long long m){
    long long res=0,pos=m;
    for(int i=1;i<n;++i)
        res+=abs(d[i]-pos), pos+=m;
    return res;
}

int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i)
        scanf("%d",&d[i]);

    while(right-left>10){
        mid1=(left*2+right)/3, mid2=(left+2*right)/3;
        long long cost1=cost(mid1), cost2=cost(mid2);

        if(cost1<=cost2) right=mid2-1;
        if(cost1>=cost2) left=mid1+1;
    }

    for(long long x=left;x<=right;++x)
        res = min(res,cost(x));

    printf("%lld", res);
    return 0;
}
