#include <stdio.h>

int main() {
    int h,m;
    scanf("%d%d",&h,&m);
    printf("%d %d", (h-(m<45?1:0)+24)%24, (m+15)%60);
    return 0;
}
