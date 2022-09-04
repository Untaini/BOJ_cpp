#include <cstdio>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        int x,y;
        scanf("%d%d",&x,&y);
        printf("Case #%d: %d\n",i+1,x+y);
    }
    return 0;
}




