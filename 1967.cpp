#include <cstdio>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<pair<int, int> > > v(10001, vector<pair<int ,int> >());
int n, r, m[10001];
queue<int> q;
int main() {
    scanf("%d",&n);
    for(int i=1;i<n;++i) {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        v[x].push_back(make_pair(y,z));
        v[y].push_back(make_pair(x,z));
    }

    for(int i=1;i<=n;++i) {
        if(v[i].size()==1) {
            for(int j=1;j<=n;++j) m[j] = -1;
            q.push(i); m[i] = 0;
            while(!q.empty()) {
                int p = q.front(); q.pop();
                r= max(r, m[p]);
                for(int k=0;k<v[p].size();++k) {
                    if(m[v[p][k].first] == -1){
                        m[v[p][k].first] = m[p]+v[p][k].second;
                        q.push(v[p][k].first);
                    }
                }
            }
        }
    }
    printf("%d",r);
}
