#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;

#define pii pair<int, int>
vector<pii> v;
int n,a,b;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d%d",&a,&b);
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(), v.end());
    for(pii e : v)
        printf("%d %d\n",e.first, e.second);
    return 0;
}
