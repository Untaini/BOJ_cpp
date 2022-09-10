#include <cstdio>
#include <algorithm>
#include <cmath>
#include <queue>
using namespace std;

int g[4002][4002], x,y,n, px[4002],py[4002];
long long d[4002];
bool p[18000000]={1,1};
priority_queue<pair<int, int>> q;

int dis(int s, int e){
    return (int) sqrt((px[s]-px[e])*(px[s]-px[e]) + (py[s]-py[e])*(py[s]-py[e]));
}

int main() {
    for(int i=2; i*i<18000000; ++i)
        if(!p[i])
            for(int j=i*i; j<18000000; j+=i)
                p[j]=1;

    scanf("%d%d",&x,&y);
    px[0]=x,py[0]=y;
    scanf("%d%d",&x,&y);
    px[1]=x,py[1]=y;
    g[0][1] = g[1][0] = -dis(0,1);
    scanf("%d",&n);

    for(int i=0;i<n;++i){
        scanf("%d%d",&x,&y);
        px[i+2]=x,py[i+2]=y;
        for(int j=0;j<i+2;++j)
            g[j][i+2] = g[i+2][j] = -dis(j,i+2);
    }

    fill(d+1, d+4002, 1ll<<62);

    q.push(make_pair(0,0));
    while(!q.empty()){
        pair<int, int> pii = q.top(); q.pop();
        int node = pii.second, totalDis = pii.first;

        if(d[node] < -totalDis) continue;

        d[node] = -totalDis;
        for(int i=0;i<n+2;++i){
            int distance = -g[node][i];
            if(!p[distance] ){
                q.push(make_pair(totalDis-distance,i));
            }
        }
    }

    printf("%d",d[1]==(1ll<<62)?-1:d[1]);

    return 0;
}
