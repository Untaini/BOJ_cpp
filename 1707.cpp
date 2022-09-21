#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n, d[20001];
vector<vector<int> > v(20001, vector<int>());

bool dfs(int k, bool toggle) {
    if(d[k]==-1) {
        d[k] = toggle;
        bool check = true;
        for(int i=0;i<v[k].size();++i) {
            if(!check) break;
            check &= dfs(v[k][i], toggle^1);
        }
        return check;
    }
    else return d[k]==toggle;
}

int main() {
    scanf("%d",&n);

    for(int t=0;t<n;++t) {
        int V,e;
        scanf("%d%d", &V,&e);

        for(int i=0;i<e;++i) {
            int x,y;
            scanf("%d%d",&x,&y);
            v[x].push_back(y);
            v[y].push_back(x);
        }
        fill(d+1, d+V+1, -1);

        bool check = true;
        for(int i=1;i<=V;++i)
            if(d[i]==-1)
                check &= dfs(i,0);

        printf("%s\n",check?"YES":"NO");

        for(int i=0;i<20001;++i)
            v[i].clear();
    }
    return 0;
}
