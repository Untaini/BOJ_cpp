#include <cstdio>

int n,m;

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);

}

int main() {
    scanf("%d%d",&n,&m);
    printf("%d", m-gcd(n,m));

}
