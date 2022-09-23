#include <cstdio>

int n,c=1;
int main() {
    scanf("%d",&n); --n;
    while(n>0) n-=6*c++;
    printf("%d",c);
    return 0;
}
