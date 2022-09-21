#include <cstdio>

int d[100001],n,i,c,x;
int main() {
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&x);
        while(c&&d[c-1]<=x) --c;
        d[c++]=x;
    }
    printf("%d",c);

}
