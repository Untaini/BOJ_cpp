#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

vector<vector<int>> graph(1001,vector<int>());
int n,m,v,a,b;
bool visited[2][1001];
queue<int> q;
stack<int> s;

int main() {
    scanf("%d%d%d",&n,&m,&v);
    for(int i=0;i<m;++i){
        scanf("%d%d",&a,&b);
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for(int i=1;i<=n;++i){
        sort(graph[i].begin(), graph[i].end());
        graph[i].erase(unique(graph[i].begin(), graph[i].end()), graph[i].end());
    }

    s.push(v);
    while(!s.empty()){
        int ver = s.top(); s.pop();
        if(visited[0][ver]) continue;

        visited[0][ver] = true;
        printf("%d ", ver);
        for(auto it=graph[ver].rbegin(); it!=graph[ver].rend(); ++it)
            if(!visited[0][*it])
                s.push(*it);
    }
    printf("\n");

    q.push(v);
    while(!q.empty()){
        int ver = q.front(); q.pop();
        if(visited[1][ver]) continue;

        visited[1][ver] = true;
        printf("%d ", ver);
        for(auto it=graph[ver].begin();it!=graph[ver].end();++it)
            if(!visited[1][*it])
                q.push(*it);
    }
    return 0;
}
