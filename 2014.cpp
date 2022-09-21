#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

#define INT_MAX ((1<<31)-1)

int k,n,d[100],r=-1;
long long m,t;
priority_queue<long long> pq;
int main() {
    scanf("%d%d",&k,&n);
    for(int i=0;i<k;++i)
        scanf("%d",&d[i]);
    pq.push(-1ll);
    while(r<n){
        t=pq.top(); pq.pop();
        if(t>=m) continue;
        for(int i=0;i<min(k,n-(int)pq.size());++i)
            pq.push(t*d[i]);
        m=t,++r;
        printf("%d %lld %u\n",r,-m, pq.size());
    }
    printf("%lld",-m);
    return 0;
}
