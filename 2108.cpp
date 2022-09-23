#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> pv;
vector<int> v,p;
int n,mn=5000,mx=-5000,x,i,d[10000],t;
long long r;
int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&x);
        mn = min(mn,x);
        mx = max(mx,x);
        r += x;
        v.push_back(x);
        ++d[x+5000];
    }

    for(i=0;i<10000;++i)
        if(d[i])
            pv.push_back({d[i],i-5000});

    sort(v.begin(),v.end());
    sort(pv.begin(),pv.end());

    t=pv[pv.size()-1].first;
    for(i=pv.size()-1;pv[i].first==t&&i>=0;--i)
        p.push_back(pv[i].second);

    printf("%d\n%d\n%d\n%d",r*2/n-r/n,v[n/2],p.size()==1?p[0]:p[p.size()-2],mx-mn);
    return 0;
}
