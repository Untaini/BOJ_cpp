#include <cstdio>
int n,x,d[31]={1,1,5},s[2];
int main() {
    for(int i=3;i<=31;++i){
        s[i&1]+=d[i-3];
        d[i]=2*s[i&1]+3*s[(i&1)^1]+4*d[i-2]+d[i-1];
    }
    scanf("%d",&n);
    for (int i=0;i<n;++i){
        scanf("%d",&x);
        printf("%d\n",d[x]);
    }
}
