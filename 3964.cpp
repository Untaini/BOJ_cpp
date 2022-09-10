#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int t;
int main() {
    scanf("%d",&t);
    for(int i=0;i<t;++i) {
        long long n,k;
        scanf("%lld%lld",&n,&k);
        int sk = int(sqrt(k));
        vector<long long> pk;
        vector<long long> pn;
        if(k%2==0){
            pk.push_back(0);
            while(!(k%2)) {
                ++pk[0];
                k/=2;
            }
            pn.push_back(0);
            long long p = 2;
            while(1){
                pn[0] += n/p;
                if(n/p < 2) break;
                p*=2;
            }
        }
        for(int j=3;j<=sk;j+=2){
            if(k==1) break;
            else if(k%j==0) {
                int pos = pk.size();
                pk.push_back(0);
                while(k%j==0){
                    ++pk[pos];
                    k/=j;
                }
                pn.push_back(0);
                long long p = j;
                while(1){
                    pn[pos] += n/p;
                    if(n/p < j) break;
                    p *= j;
                }
            }
        }
        if(k!=1){
            int pos = pk.size();
            pk.push_back(1);
            pn.push_back(0);
            long long p = k;
            while(1){
                pn[pos] += n/p;
                if(n/p < k) break;
                p *= k;
            }
        }
        long long r = ((long long)1<<63)-1;
        for(int i=0;i<pk.size();++i)
            r = min(r, pn[i]/pk[i]);
        printf("%lld\n",r);
    }
    return 0;
}
