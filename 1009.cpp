#include <cstdio>

int t,a,b,i,k;
int f(int n){
    if(n==1) return a%10;
    int x = f(n/2);
    x*=x;
    if(n%2) x*=a;
    return x%10;
}
int main() {
    scanf("%d",&t);
    for(i=0;i<t;++i) {
        scanf("%d%d",&a,&b);
        printf("%d\n",(k=f(b))?k:10);
    }
}
