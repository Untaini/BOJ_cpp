#include <cstdio>
#include <queue>
#include <algorithm>
#include <unordered_map>
using namespace std;

int a,b,c,d;
queue<pair<int, int>> q;
unordered_map<long long, int> um;

long long lxy(int x, int y){
    return 1ll*x*1000000+y;
}

int main() {
    scanf("%d%d%d%d",&a,&b,&c,&d);
    um[0]=1;
    q.push({0,0});
    while(!q.empty()){
        auto [x,y] = q.front(); q.pop();
        if(!um[lxy(0,y)]){
            um[lxy(0,y)]=um[lxy(x,y)]+1;
            q.push({0,y});
        }
        if(!um[lxy(a,y)]){
            um[lxy(a,y)]=um[lxy(x,y)]+1;
            q.push({a,y});
        }
        if(!um[lxy(x,0)]){
            um[lxy(x,0)]=um[lxy(x,y)]+1;
            q.push({x,0});
        }
        if(!um[lxy(x,b)]){
            um[lxy(x,b)]=um[lxy(x,y)]+1;
            q.push({x,b});
        }
        if(!um[lxy(x+y<a?x+y:a, x+y<a?0:x+y-a)]){
            um[lxy(x+y<a?x+y:a, x+y<a?0:x+y-a)]=um[lxy(x,y)]+1;
            q.push({x+y<a?x+y:a, x+y<a?0:x+y-a});
        }
        if(!um[lxy(x+y<b?0:x+y-b, x+y<b?x+y:b)]){
            um[lxy(x+y<b?0:x+y-b, x+y<b?x+y:b)]=um[lxy(x,y)]+1;
            q.push({x+y<b?0:x+y-b, x+y<b?x+y:b});
        }
    }
    if(0<c&&c<a&&0<d&&d<b) printf("-1");
    else printf("%d",um[lxy(c,d)]-1);
    return 0;
}
