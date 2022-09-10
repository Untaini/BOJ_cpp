#include <cstdio>
#define max(a,b) (a>b?a:b)
int gcd(int a, int b){
    if(a%b) return gcd(b, a%b);
    else return b;
}
int a,b,s,d[2001];
int main() {
    scanf("%d%d",&a,&b);
    for(int i=1;i<=2000;++i)
        d[i]=i;

    for(int i=1;i<=b;++i)
        for(int j=i+1;j<=b;++j)
            if(gcd(i,j)==i)
                d[j]-=d[i];

    for(int i=1;i<a;++i)
        for(int j=a;j<=b;++j)
            if(gcd(i,j)==i){
                d[j]+=d[i];
                break;
            }

    for(int i=a;i<=b;++i)
        s+=d[i];
    printf("%d",s);
    return 0;
}
