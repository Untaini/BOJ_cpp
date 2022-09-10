#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;

queue<pair<int, int> > q;
int k,n,m;
int main() {
    scanf("%d",&k);
    for(int i=0;i<k;++i) {
        int d[10] = {0,}, p=0, e[100] = {0,};
        scanf("%d%d",&n,&m);

        for(int j=0;j<n;++j) {
            int x;
            scanf("%d", &x);
            q.push(make_pair(j,x));
            d[x]++;
            p = max(p,x);
        }
        int cnt = 1;
        while(!q.empty()) {
            pair<int, int> pi = q.front(); q.pop();
            if(pi.second < p) q.push(pi);
            else {
                e[pi.first] = cnt++;
                d[pi.second]--;
                while(!d[p]) p--;
            }
        }
        printf("%d\n", e[m]);
    }


    return 0;
}
