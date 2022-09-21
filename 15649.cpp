#include <cstdio>

int d[9],n,m,p[8];
void f(int k) {
    if(k==m){
        for(int i=0;i<m;++i)
            printf("%d ",p[i]);
        printf("\n");
    }
    else
        for(int i=1;i<=n;++i){
            if(d[i]) continue;
            d[i]=p[k]=i;
            f(k+1);
            d[i]=0;
        }
}

int main() {
    scanf("%d%d",&n,&m);
    f(0);
}
