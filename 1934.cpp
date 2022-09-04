#include <cstdio>

int a,b,n;

int gcd(int a, int b){
    if(b==0) return a;
    else return gcd(b, a%b);
}

int main() {
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d%d",&a,&b);
        int g = gcd(a,b);
        printf("%d\n",a/g*b);
    }
    return 0;
}

