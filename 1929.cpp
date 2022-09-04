#include <cstdio>
char d[1000001];
int n,m;
int main() {
    scanf("%d%d",&m,&n);
    d[0] = d[1] = 1;
    for(int i=2;i<=1000;i++) {
        if(d[i]) continue;
        for(int j=i*i;j<1000001;j+=i) {
            d[j] = 1;
        }
    }

    for(int i=m;i<=n;i++) {
        if(!d[i]) printf("%d\n",i);
    }
    return 0;
}
