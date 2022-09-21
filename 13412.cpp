#include <cstdio>

int gcd(int a, int b){
    return b==0?a:gcd(b,a%b);
}

int n, r, x;
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d",&x);
        r=1;
        for(int i=2;i*i<=x;++i)
            if(x%i==0 && gcd(i, x/i) == 1) ++r;
        printf("%d\n",r);
    }
}
