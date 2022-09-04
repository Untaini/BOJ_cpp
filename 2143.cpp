#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int t,n,m,a[1001],b[1001],x,i,j;
long long r;
vector<int> v;
int main(){
    scanf("%d%d",&t,&n);
    for(i=1;i<=n;++i){
        scanf("%d",&x);
        a[i]=a[i-1]+x;
        for(j=0;j<i;++j)
            v.push_back(a[i]-a[j]);
    }
    sort(v.begin(), v.end());
    scanf("%d",&m);
    for(i=1;i<=m;++i){
        scanf("%d",&x);
        b[i]=b[i-1]+x;
        for(j=0;j<i;++j)
            r+=upper_bound(v.begin(),v.end(),t-b[i]+b[j])-lower_bound(v.begin(),v.end(),t-b[i]+b[j]);
    }
    printf("%lld",r);
}
