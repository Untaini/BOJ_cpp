#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int> > v(100001,vector<int>());
int n, d[100001];

void dfs(int p, int c) {
    if(d[c] > 0) return;
    d[c] = p;
    for(int i=0;i<v[c].size();++i) {
        dfs(c, v[c][i]);
    }
}

int main(){
    scanf("%d", &n);
    for(int i=1;i<n;++i) {
        int x,y;
        scanf("%d%d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }

    dfs(1, 1);

    for(int i=2;i<=n;++i)
        printf("%d\n", d[i]);
    return 0;
}
