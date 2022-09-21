#include <cstdio>
#define MAX 100000000
#define C 4294967296

bool d[MAX+1];
int n,x;
long long r=1;
int main() {
    scanf("%d",&n);
    for(int i=2;i*i<=MAX;++i){
        if(!d[i]) {
            x = i;
            for(int j=i*i;j<=MAX;j+=i) {
                d[j] = true;
                if(j<=n && j/i==x) x=j;
            }
            if(x<=n)
                r=r*x%C;
        }
    }
    for(int i=10001;i<=n;++i)
        if(!d[i])
            r=r*i%C;
    printf("%lld", r);
}
