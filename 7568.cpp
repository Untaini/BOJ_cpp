#include <cstdio>

int w[50],h[50],n,i,j,c;
int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d%d",&w[i],&h[i]);
    for(i=0;i<n;++i){
        c=1;
        for(j=0;j<n;++j)
            if(i!=j && w[i]<w[j] && h[i]<h[j])
                ++c;
        printf("%d ",c);
    }
    return 0;
}
