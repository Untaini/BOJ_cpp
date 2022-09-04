#include <cstdio>

int b,d;
long long a,c;
int main() {
    scanf("%lld%d%lld%d",&a,&b,&c,&d);
    int cb = b, cd = d;
    while(cb!=0) a*=10, cb/=10;
    while(cd!=0) c*=10, cd/=10;
    printf("%lld",a+b+c+d);
    return 0;
}
