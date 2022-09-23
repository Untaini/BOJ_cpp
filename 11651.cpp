#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> v;
int n,x,y,i;
int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d%d",&x,&y);
        v.push_back({y,x});
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;++i)
        printf("%d %d\n",v[i].second, v[i].first);
    return 0;
}
