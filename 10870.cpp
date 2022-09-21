#include <cstdio>

int d[21] = {0,1};
int n;
int main(){
    for(int i=2;i<=20;++i)
        d[i] = d[i-1] + d[i-2];
    scanf("%d",&n);
    printf("%d", d[n]);
    return 0;
}
