#include <cstdio>

long long s[100001], d[100001];
int l[100001], t, n, x;

long long gcd(long long a, long long b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main() {
    scanf("%d",&t);
    for(int i=0;i<t;i++) {

        long long maxI=0, maxG = 0;
        scanf("%d",&n);

        for(int j=0;j<n;j++){
            scanf("%d",&x);
            d[j]=x;
        }

        for(int j=0;j<n;j++) {
            long long bg = 0, cg = 0;
            for(int k=j;k<n;k++) {
                cg = gcd(d[k], cg);

                if(cg < maxG && n-k < maxI) break;

                if(bg*(k-1) > cg*j){
                    if(maxG*maxI < bg*(k-1))
                        maxG = bg, maxI = k-1;
                    break;
                }
                bg = cg;
            }
        }

        printf("%lld", maxG*maxI);

    }
    return 0;
}
