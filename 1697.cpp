#include <cstdio>
#include <queue>
using namespace std;

int d[100001],n,k,p;
queue<int> q;
int main() {
    scanf("%d%d",&n,&k);
    q.push(n);
    d[n]=1;
    while(!q.empty()){
        p = q.front(); q.pop();
        if(p>0 && !d[p-1]) {
            d[p-1] = d[p]+1;
            q.push(p-1);
        }
        if(p<100001 && !d[p+1]) {
            d[p+1] = d[p]+1;
            q.push(p+1);
        }
        if(2*p<100001 && !d[2*p]) {
            d[2*p] = d[p]+1;
            q.push(2*p);
        }
    }
    printf("%d",d[k]-1);
    return 0;
}
