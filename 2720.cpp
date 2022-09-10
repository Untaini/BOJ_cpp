#include <cstdio>

int n,x;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i) {
        scanf("%d",&x);
        printf("%d %d %d %d\n",x/25, x%25/10, x%25%10/5, x%5);
    }
    return 0;
}
