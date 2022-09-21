#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<long long> > v(100010, vector<long long>());
int n,x,y,i,j,s;
long long r,l;
int main(){
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d%d",&x,&y);
        v[y].push_back(x);
    }
    for(i=1;i<=n;++i){
        s=v[i].size();
        if(s>1){
            sort(v[i].begin(), v[i].end());
            r+=v[i][1]-v[i][0];
            r+=v[i][s-1]-v[i][s-2];
            for(j=1;j<s-1;++j)
                r+=min(v[i][j+1]-v[i][j], v[i][j]-v[i][j-1]);
        }
    }
    printf("%lld",r);
}
