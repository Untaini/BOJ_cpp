#include <cstdio>
#include <queue>
using namespace std;
int d[100002];
int n,k;
queue<int> q;
int main() {
    scanf("%d%d",&n,&k);
    for(int i=0;i<=100000;++i) d[i]=-1;
    d[n] = 0;
    q.push(n);
    if(n != 0) {
        n<<=1;
        while(n<=100000) {
            if(d[n] == -1){
                d[n] = d[n>>1];
                q.push(n);
            }
            n<<=1;
        }
    }
    while(!q.empty()) {
        int p = q.front(); q.pop();
        int prev = p-1, next = p+1;
        if(p>0 && d[prev] == -1) {
            d[prev] = d[p]+1;
            q.push(prev);
            if(prev != 0){
                prev<<=1;
                while(prev<=100000) {
                    if(d[prev] == -1){
                        d[prev] = d[prev>>1];
                        q.push(prev);
                    }
                    prev<<=1;
                }
                }
        }
        if(p<100000 && d[next] == -1){
            d[next] = d[p]+1;
            q.push(next);
            next<<=1;
            while(next<=100000) {
                if(d[next] == -1){
                    d[next] = d[next>>1];
                    q.push(next);
                }
                next<<=1;
            }
        }
    }
    printf("%d", d[k]);
    return 0;
}
