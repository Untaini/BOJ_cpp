#include <cstdio>

long long gcd(long long a, long long b){
    if(a%b) return gcd(b,a%b);
    else return b;
}

long long g,l,a=1,b,m;
int main() {
    scanf("%lld%lld",&g,&l);
    b=m=g*l;
    for(long long i=g;i*i<=m;i+=g)
        if(m/i*i==m && gcd(i,m/i)==g && i+m/i<a+b)
            a=i,b=m/i;
    printf("%lld %lld",a,b);
    return 0;
}
