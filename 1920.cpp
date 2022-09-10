#include <cstdio>
#include <algorithm>
using namespace std;

int d[1000001],n,k,x,l,r,m,c;
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i)
        scanf("%d",&d[i]);

    sort(d,d+n);

    scanf("%d",&k);
    for(int i=0;i<k;++i) {
        scanf("%d",&x);
        l=0,r=n-1,c=0;
        while(l<=r){
            m=(l+r)/2;
            if(d[m] == x) c=1,l=r+1;
            else if(d[m] > x) r = m-1;
            else l = m+1;
        }
        printf("%d\n",c);
    }
}
