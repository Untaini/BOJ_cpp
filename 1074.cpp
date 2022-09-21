#include <cstdio>

int n,r,c;
int f(int n, int r, int c){
    if(n==0) return r*2+c;
    int d=1<<n;
    return (r/d*2+c/d)*d*d + f(n-1,r%d,c%d);
}

int main() {
    scanf("%d%d%d",&n,&r,&c);
    printf("%d",f(n-1,r,c));
    return 0;
}
