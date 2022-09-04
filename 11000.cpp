#include <cstdio>
#include <queue>
#include <algorithm>
#include <vector>
using namespace std;

priority_queue<int> pq;
vector<pair<int, int> > v;
int n,s,e,i;

int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d%d",&s,&e);
        v.push_back({s,e});
    }
    sort(v.begin(), v.end());
    for(auto p : v){
        if(!pq.empty() && -pq.top()<=p.first)
            pq.pop();
        pq.push(-p.second);
    }
    printf("%d",pq.size());
    return 0;
}
