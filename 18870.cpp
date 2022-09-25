#include <cstdio>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int, int> um;
vector<int> v;
int n,x,i,d[1000000];

int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&x);
        v.push_back(x);
        d[i]=x;
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());

    for(i=0;i<v.size();++i)
        um[v[i]]=i;

    for(i=0;i<n;++i)
        printf("%d ",um[d[i]]);
    return 0;
}
