#include <cstdio>

int n,x,r;
int main() {
    scanf("%d",&n);
    for(int i=0;i<5;++i){
        scanf("%d",&x);
        r+=(n==x);
    }
    printf("%d",r);
    return 0;
}
