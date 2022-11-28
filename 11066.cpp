#include <cstdio>
#include <algorithm>
using namespace std;

int t,k;
long long dp[501][1001], d[501];
int main() {
    scanf("%d",&t);
    for(int i=0;i<t;++i){
        scanf("%d",&k);
        for(int j=1;j<=k;++j){
            scanf("%lld",&d[j]);
            d[j] += d[j-1];
        }

        for(int a=1; a<k; ++a)
            for(int b=1; b+a<=k; ++b){
                dp[b][b+a] = 1ll<<62;
                for(int c=b; c<b+a; ++c)
                    dp[b][b+a] = min(dp[b][b+a], dp[b][c] + dp[c+1][b+a] + d[b+a] - d[b-1]);
            }

        printf("%lld\n", dp[1][k]);
    }
    return 0;
}
