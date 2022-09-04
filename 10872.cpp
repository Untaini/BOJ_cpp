#include <cstdio>

int a,b,n;

int f(int n){
    if(n==0) return 1;
    else return n*f(n-1);
}

int main() {
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
