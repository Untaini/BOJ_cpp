#include <cstdio>

int n,x,d[12]={1};
int main() {
    scanf("%d", &n);

    for(int i=1;i<12;++i)
        d[i] = d[i-1] + d[i-2<0?i:i-2] + d[i-3<0?i:i-3];

    for(int i=0;i<n;++i) {
        scanf("%d",&x);
        printf("%d\n",d[x]);
    }

    return 0;
}
