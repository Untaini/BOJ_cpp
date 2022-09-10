#include <cstdio>

int c,p=1001,n,r,m,i;
int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&c);
        if(p<c) m+=(c-p), r=r>m?r:m;
        else m=0;
        p=c;
    }
    printf("%d",r);
}
