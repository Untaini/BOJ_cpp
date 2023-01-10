#include <cstdio>
#include <algorithm>
using namespace std;

bool arr[81][16001];
int n,k,x, power[81], temp, res;

int main() {
    scanf("%d%d%d",&n,&k,&x);
    for(int i=1;i<=n;++i)
        scanf("%d%d",&power[i],&temp);

    for(int i=1;i<=n;++i){
        for(int l=i;l>1;--l)
            for(int j=16000;j>=0;--j)
                arr[l][j] |= arr[l-1][j-power[i]];

        arr[1][power[i]] = 1;
    }

    for(int j=0;j<=16000;++j)
        if(arr[k][j])
            res = max(res, (k*x-j)*j);

    printf("%d", res);

    return 0;
}
