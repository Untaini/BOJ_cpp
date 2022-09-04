#include <cstdio>

int a,b;

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main() {
    scanf("%d%d", &a,&b);
    int g = gcd(a,b);
    printf("%d\n%d",g, a*b/g);
    return 0;
}
