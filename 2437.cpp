#include <cstdio>
#include <algorithm>
using namespace std;

int n,s=1,d[1001],i;
int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&d[i]);
    sort(d,d+n); d[n]=2e9;
    for(i=0;s>=d[i];++i)
        s+=d[i];
    printf("%d",s);
    return 0;
}
