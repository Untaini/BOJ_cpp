#include <cstdio>
#include <algorithm>
using namespace std;

int n, d[100000];
long long left, right=1e9, mid;

long long cost(long long m){
    long long res=0,pos=m;
    for(int i=1;i<n;++i)
        res+=abs(d[i]-pos), pos+=m;
    return res;
}

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i)
        scanf("%d",&d[i]);

    while(left<=right){
        mid = (left+right)/2;

        if(cost(mid)>cost(mid+1)) left=mid+1;
        else right=mid-1;
    }

    printf("%lld", cost(left));
    return 0;
}
