#include <cstdio>

int d[8],v[9],n,i;
void f(int x){
    if(x==n){
        for(int i=0;i<n;++i)
            printf("%d ",d[i]);
        printf("\n");
    }
    else
        for(int i=1;i<=n;++i)
            if(!v[i]){
                d[x]=v[i]=i;
                f(x+1);
                v[i]=0;
            }
}

int main() {
    scanf("%d",&n);
    f(0);
}
