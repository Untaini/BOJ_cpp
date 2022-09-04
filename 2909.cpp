#include <cstdio>

int c, k, n=1;
int main() {
    scanf("%d%d", &c,&k);

    for(int i=0;i<k;i++) n*=10;

    if(n==1) printf("%d", c);
    else printf("%d",c/n*n + (c%n/(n/10)>=5?1:0)*n);

    return 0;
}
