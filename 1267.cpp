#include <cstdio>

int n, y, m;
int main() {
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        int x;
        scanf("%d",&x);
        y += (x/30+1)*10;
        m += (x/60+1)*15;
    }

    if(y>m) printf("M %d", m);
    else if(y<m) printf("Y %d", y);
    else printf("Y M %d", y);
    return 0;
}
