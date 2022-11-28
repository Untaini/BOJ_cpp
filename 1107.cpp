#include <cstdio>
#include <queue>
using namespace std;

int d[1000001],n,m,x;
bool b[10];
priority_queue<pair<int, int>> q;

void insertChannel(int k, int channel){
    if(k==6) return;
    for(int i=9; i>=0; --i)
        if(!b[i] && !d[channel+i]){
            q.push({-k-2, channel+i});
            insertChannel(k+1, (channel+i)*10);
        }
    return;
}

int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;++i){
        scanf("%d",&x);
        b[x]=1;
    }

    insertChannel(0,0);
    q.push({-1, 100});

    while(!q.empty()){
        auto [cnt, channel] = q.top(); q.pop();
        if(d[channel]) continue;
        d[channel] = -cnt;

        if(channel-1>=0 && !d[channel-1])
            q.push({cnt-1, channel-1});

        if(channel+1<1000000 && !d[channel+1])
            q.push({cnt-1, channel+1});
    }

    printf("%d",d[n]-1);
    return 0;
}
