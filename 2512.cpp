#include <cstdio>
#include <algorithm>
using namespace std;

int n, m, d[10000], left, right, mid;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&d[i]);
        right = max(right, d[i]);
    }
    scanf("%d",&m);

    while(left<=right){
        mid = (left+right)/2;

        int sm = 0;
        for(int i=0;i<n;++i)
            sm += min(mid, d[i]);

        if( sm <= m ) left=mid+1;
        else right = mid-1;
    }

    printf("%d", right);
    return 0;
}
