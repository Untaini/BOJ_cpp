#include <cstdio>
#include <algorithm>
using namespace std;

int n,d[1000000],mn=1000000, mx =-1000000;
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&d[i]);
        mx = max(d[i], mx);
        mn = min(d[i], mn);
    }
    printf("%d %d",mn,mx);
    return 0;
}
