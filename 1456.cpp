#include <cstdio>
#define NUM 10000000
bool d[NUM*2];
long long i, j, r, a, b;
int main() {
    scanf("%lld%lld",&a,&b);
    for(i = 2; i <= NUM; ++i)
        if(!d[i]){
            for(j = i*i; j <= NUM; j+=i)
                d[j]=1;
            for(j = i*i; j <= 1ll*NUM*NUM; j*=i)
                if(j <= b){
                    if(a <= j) ++r;
                    if(b/j < i) break;
                }
                else break;

        }
    printf("%lld",r);
}
