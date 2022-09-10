#include <cstdio>

int a,b,c,i;
long long d[32],r=1;

int main(){
    scanf("%d%d%d",&a,&b,&c);
    d[0] = a;
    for(i=1;i<32;++i)
        d[i] = d[i-1]*d[i-1]%c;
    for(int i=0;i<32;++i)
        if(b&(1<<i)) r=r*d[i]%c;
    printf("%lld", r);
}
