#include <cstdio>

void f(int k, int a, int b, int c){
    if(k==0) return;
    f(k-1,a,c,b);
    printf("%d %d\n",a,b);
    f(k-1,c,b,a);
}

int n;
int main() {
    scanf("%d",&n);
    printf("%d\n",(1<<n)-1);
    f(n,1,3,2);
}
